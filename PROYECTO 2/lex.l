PAGINAWEB			("Pagina")
SECCIONCABECERA		("Cabecera")
SECCIONCUERPO		("Cuerpo")
SECCIONPIEDEPAGINA	("Ppagina")
FINPIEDEPAGINA		("FPpagina")

ETIQUETANEGRITA		("Negrita")
ETIQUETAFINNEGRITA	("FinNegrita")

ETIQUETACURSIVA		("Cursiva")
ETIQUETAFINCURSIVA	("FinCursiva")

ETIQUETASUBRAYADO		("Subrayado")
ETIQUETAFINSUBRAYADO	("FinSubrayado")

ETIQUETATACHADO		("Tachado")
ETIQUETAFINTACHADO	("FinTachado")

ETIQUETASUBINDICE		("Subindice")
ETIQUETAFINSUBINDICE	("FinSubindice")

ETIQUETASUPERINDICE		("Superindice")
ETIQUETAFINSUPERINDICE	("FinSuperindice")

ETIQUETATAMANO			("Tamaño = ")(0-9)+
ETIQUETAFINTAMANO		("FinTamaño")

ETIQUETASANGRADO		("Sangrado")
ETIQUETAFINSANGRADO		("FinSangrado")

ETIQUETAPARRAFOIZQ		("Parrafo Posicion Izquierda")
ETIQUETAPARRAFODER		("Parrafo Posicion Derecha")
ETIQUETAPARRAFOCEN		("Parrafo Posicion Centrada")
ETIQUETAPARRAFO			("Parrafo")
ETIQUETAFINPARRAFO		("FinParrafo")

ETIQUETALISTA			("Lista")
ETIQUETAFINLISTA		("FinLista")

ETIQUETAELEMENTOLISTA		("ElementoLista")
ETIQUETAFINELEMENTOLISTA 	("FinElementoLista")

ETIQUETAENLACE			("Enlace")
ETIQUETAFINENLACE		("FinEnlace")

ETIQUETACON				("Con")
ETIQUETAFINCON			("FinCon")

ETIQUETAMOSTRAR			("Mostrar")
ETIQUETAFINMOSTRAR		("FinMostrar")

ETIQUETATITULO			("Titulo"|"Título")
ETIQUETAFINTITULO		("FinTitulo"|"FinTítulo")

ETIQUETASALTO			("Salto")
ETIQUETALINEA			("Linea")

ESPACIO					[( )|\t]+
TEXTO					[a-zA-Z0-9_|"!"|"#"|"$"|"%"|"&"|"'"|"*"|"+"|","|"\"|"-"|"."|"/"|":"|";"|"<"|"="|">"|"?"|"@"|"÷"]+

SIMBOLO_COPYRIGHT 		["©"]
SIMBOLO_FLECHA 			["←"]
SIMBOLO_EURO 			["€"]
SIMBOLO_REGISTRO 		["®"]
SIMBOLO_MASMENOS 		["±"]
SIMBOLO_MARCA 			["™"]
SIMBOLO_DIVISION 		["÷"]
SIMBOLO_FLECHA_DOBLE	["↔"]
TOKEN_A_TILDE			["á"]
TOKEN_I_TILDE			["í"]
TOKEN_O_TILDE			["ó"]
TOKEN_U_TILDE			["ú"]
TOKEN_A_MAYUS_TILDE		["Á"]
TOKEN_E_MAYUS_TILDE		["É"]
TOKEN_I_MAYUS_TILDE		["Í"]
TOKEN_O_MAYUS_TILDE		["Ó"]
TOKEN_U_MAYUS_TILDE		["Ú"]
TOKEN_N_MAYUSCULA		["Ñ"]

%x COMENTARIO TEXTO MOSTRAR

%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "sintactico.tab.h"

	/* Variables globales necesarias para el control de lineas, caracteres, tokens y columnas */
	int num_lineas = 1, num_caracteres = 0, num_tokens = 0, num_columna = 0, error = 0, parrafo_linea = 0;
	static char comentario_guardado[5000] = {0};

	// Función que revisa los primeros dos bytes del archivo
	int es_utf16(FILE *archivo) 
	{
		unsigned char primeros_bytes[2];
		fread(primeros_bytes, 1, 2, archivo); // file read los 2 primeros bytes

		// Si esos bytes son de UTF-16
		if ((primeros_bytes[0] == 0xFF && primeros_bytes[1] == 0xFE) || (primeros_bytes[0] == 0xFE && primeros_bytes[1] == 0xFF)) 
		{ return 1; /* Sí es UTF-16 */ }
		else 
		{ rewind(archivo); return 0; /* No es UTF-16 */ }
	}

	/* Funcion para el manejo de errores */
	void errores(int num_lineas, int num_columna, int error) 
	{
   		switch (error) 
		{	
			case 2: /* Para detectar un caracter que no forma parte del LENGUAJE */
				printf("\n\nERROR: L%cNEA %d, COLUMNA %d \nEL CAR%cCTER < %s > NO ES PARTE DEL LENGUAJE...\n\n", 214, num_lineas, num_columna, 181, yytext);
				exit(1);
        	break;

			case 3: 
				printf("No se pudo abrir el archivo de tokens");
				exit(1);
			break;
		}
	}

	FILE *registra_tokens;

	void abrir_registro()
	{
		registra_tokens = fopen("tokens.txt", "w");
		if (!registra_tokens) 
		{
			error = 3; errores(num_lineas, num_columna, error);
		}
	}

	void cerrar_registro()
	{ 
		if (registra_tokens) fclose(registra_tokens);
	}

%}
%option noyywrap

%% 

{PAGINAWEB} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <html>\n", num_lineas, num_columna);
    return PAGINAWEB_T;
}

{SECCIONCABECERA} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <cabecera>\n", num_lineas, num_columna);
    return SECCIONCABECERA_T;
}

{SECCIONCUERPO} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <cuerpo>\n", num_lineas, num_columna);
    return SECCIONCUERPO_T;
}

{ETIQUETANEGRITA} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <negrita>\n", num_lineas, num_columna);
    return ETIQUETANEGRITA_T;
}

{ETIQUETAFINNEGRITA} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: </negrita>\n", num_lineas, num_columna);
    return ETIQUETAFINNEGRITA_T;
}

{ETIQUETACURSIVA} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <cursiva>\n", num_lineas, num_columna);
    return ETIQUETACURSIVA_T;
}

{ETIQUETAFINCURSIVA} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: </cursiva>\n", num_lineas, num_columna);
    return ETIQUETAFINCURSIVA_T;
}

{ETIQUETASUBRAYADO} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: <subrayado>\n", num_lineas, num_columna);
    return ETIQUETASUBRAYADO_T;
}

{ETIQUETAFINSUBRAYADO} {
    ++num_tokens; num_caracteres += yyleng; num_columna += yyleng;
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: </subrayado>\n", num_lineas, num_columna);
    return ETIQUETAFINSUBRAYADO_T;
}

{ETIQUETATACHADO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <tachado>\n", num_lineas, num_columna);
	return ETIQUETATACHADO_T;
}

{ETIQUETAFINTACHADO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </tachado>\n", num_lineas, num_columna);
	return ETIQUETAFINTACHADO_T;
}

{ETIQUETASUBINDICE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <subindice>\n", num_lineas, num_columna);
	return ETIQUETASUBINDICE_T;
}

{ETIQUETAFINSUBINDICE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </subindice>\n", num_lineas, num_columna);
	return ETIQUETAFINSUBINDICE_T;
}

{ETIQUETASUPERINDICE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <superindice>\n", num_lineas, num_columna);
	return ETIQUETASUPERINDICE_T;
}

{ETIQUETAFINSUPERINDICE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </superindice>\n", num_lineas, num_columna);
	return ETIQUETAFINSUPERINDICE_T;
}

{ETIQUETATAMANO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <tamano>\n", num_lineas, num_columna);
	return ETIQUETATAMANO_T;
}

{ETIQUETAFINTAMANO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </tamano>\n", num_lineas, num_columna);
	return ETIQUETAFINTAMANO_T;
}

{ETIQUETASANGRADO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <sangrado>\n", num_lineas, num_columna);
	return ETIQUETASANGRADO_T;
}

{ETIQUETAFINSANGRADO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </sangrado>\n", num_lineas, num_columna);
	return ETIQUETAFINSANGRADO_T;
}

{ETIQUETAPARRAFO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <parrafo>\n", num_lineas, num_columna);
	return ETIQUETAPARRAFO_T;
}

{ETIQUETAPARRAFOIZQ} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <parrafoizq>\n", num_lineas, num_columna);
	return ETIQUETAPARRAFOIZQ_T;
}

{ETIQUETAPARRAFODER} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <parrafoder>\n", num_lineas, num_columna);
	return ETIQUETAPARRAFODER_T;
}

{ETIQUETAPARRAFOCEN} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <parrafocen>\n", num_lineas, num_columna);
	return ETIQUETAPARRAFOCEN_T;
}

{ETIQUETAFINPARRAFO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </parrafo>\n", num_lineas, num_columna);
	return ETIQUETAFINPARRAFO_T;
}

{ETIQUETALISTA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <lista>\n", num_lineas, num_columna);
	return ETIQUETALISTA_T;
}

{ETIQUETAFINLISTA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </lista>\n", num_lineas, num_columna);
	return ETIQUETAFINLISTA_T;
}

{ETIQUETAELEMENTOLISTA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <elemento>\n", num_lineas, num_columna);
	return ETIQUETAELEMENTOLISTA_T;
}

{ETIQUETAFINELEMENTOLISTA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </elemento>\n", num_lineas, num_columna);
	return ETIQUETAFINELEMENTOLISTA_T;
}

{ETIQUETAENLACE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <enlace>\n", num_lineas, num_columna);
	return ETIQUETAENLACE_T;
}

{ETIQUETAFINENLACE} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </enlace>\n", num_lineas, num_columna);
	return ETIQUETAFINENLACE_T;
}

{ETIQUETACON} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <con>\n", num_lineas, num_columna);
	return ETIQUETACON_T;
}

{ETIQUETAFINCON} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </con>\n", num_lineas, num_columna);
	return ETIQUETAFINCON_T;
}

{ETIQUETAMOSTRAR} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <mostrar>\n", num_lineas, num_columna);
	return ETIQUETAMOSTRAR_T;
}

{ETIQUETAFINMOSTRAR} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </mostrar>\n", num_lineas, num_columna);
	return ETIQUETAFINMOSTRAR_T;
}

{ETIQUETATITULO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <titulo>\n", num_lineas, num_columna);
	return ETIQUETATITULO_T;
}

{ETIQUETAFINTITULO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </titulo>\n", num_lineas, num_columna);
	return ETIQUETAFINTITULO_T;
}

{ETIQUETASALTO} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <salto>\n", num_lineas, num_columna);
	return ETIQUETASALTO_T;
}

{ETIQUETALINEA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <linea>\n", num_lineas, num_columna);
	return ETIQUETALINEA_T;
}

{SECCIONPIEDEPAGINA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: <piedepagina>\n", num_lineas, num_columna);
	return SECCIONPIEDEPAGINA_T;
}

{FINPIEDEPAGINA} {
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA: </piedepagina>\n", num_lineas, num_columna);
	return FINPIEDEPAGINA_T;
}

"\n"	{
			/* Para detectar saltos de lineas e ignorarlos */
			num_caracteres += yyleng; 
			++num_lineas; num_columna = 1; 
		}

{ESPACIO} { num_caracteres += yyleng; num_columna += yyleng; }

{TEXTO} { 
	++num_tokens; num_caracteres += yyleng;
	num_columna += yyleng;
	yylval.sval = strdup(yytext); // Copia el texto del token a yylval.sval
	fprintf(registra_tokens, "%d, %d: ESTO ES UN TEXTO: < %s >\n", num_lineas, num_columna, yytext);
    return TEXTO_T;
}

{SIMBOLO_COPYRIGHT} {
    static const char arr[] = { (char)184, '\0' }; // © en UTF-8
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ©\n", num_lineas, num_columna);
    yylval.sval = strdup(arr);
    return SIMBOLO_COPYRIGHT_T;
}

{SIMBOLO_FLECHA} {
    static const char arr[] = { (char)0xE2, (char)0x86, (char)0x90, '\0' }; // ←
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ←\n", num_lineas, num_columna);
    yylval.sval = strdup(arr);
    return SIMBOLO_FLECHA_T;
}

{SIMBOLO_EURO} {
    static const char arr[] = { (char)0xE2, (char)0x82, (char)0xAC, '\0' }; // €
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: €\n", num_lineas, num_columna);
    yylval.sval = strdup(arr);
    return SIMBOLO_EURO_T;
}

{SIMBOLO_REGISTRO} {
    char buffer[2];
    buffer[0] = (char)169;  // ®
    buffer[1] = '\0';
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ®\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return SIMBOLO_REGISTRO_T;
}

{SIMBOLO_MASMENOS} {
    char buffer[2];
    buffer[0] = (char)164;  // ±
    buffer[1] = '\0';
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ±\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return SIMBOLO_MASMENOS_T;
}

{SIMBOLO_MARCA} {
    static const char arr[] = { (char)0xE2, (char)0x84, (char)0xA2, '\0' }; // ™
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ™\n", num_lineas, num_columna);
    yylval.sval = strdup(arr);
    return SIMBOLO_MARCA_T;
}

{SIMBOLO_FLECHA_DOBLE} {
    static const char arr[] = { (char)0xE2, (char)0x86, (char)0x94, '\0' }; // ↔
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ↔\n", num_lineas, num_columna);
    yylval.sval = strdup(arr);
    return SIMBOLO_FLECHA_DOBLE_T;
}

{TOKEN_A_TILDE} {
    char buffer[2] = { (char)160, '\0' }; // á
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: á\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_A_TILDE_T;
}

"é" {
    char buffer[2] = { (char)130, '\0' }; // é
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: é\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_E_TILDE_T;
}

{TOKEN_I_TILDE} {
    char buffer[2] = { (char)161, '\0' }; // í
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: í\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_I_TILDE_T;
}

{TOKEN_O_TILDE} {
    char buffer[2] = { (char)162, '\0' }; // ó
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ó\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_O_TILDE_T;
}

{TOKEN_U_TILDE} {
    char buffer[2] = { (char)163, '\0' }; // ú
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ú\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_U_TILDE_T;
}

{TOKEN_A_MAYUS_TILDE} {
    char buffer[2] = { (char)181, '\0' }; // Á
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: Á\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_A_MAYUS_TILDE_T;
}

{TOKEN_E_MAYUS_TILDE} {
    char buffer[2] = { (char)144, '\0' }; // É
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: É\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_E_MAYUS_TILDE_T;
}

{TOKEN_I_MAYUS_TILDE} {
    char buffer[2] = { (char)214, '\0' }; // Í
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: Í\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_I_MAYUS_TILDE_T;
}

{TOKEN_O_MAYUS_TILDE} {
    char buffer[2] = { (char)224, '\0' }; // Ó
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: Ó\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_O_MAYUS_TILDE_T;
}

{TOKEN_U_MAYUS_TILDE} {
    char buffer[2] = { (char)233, '\0' }; // Ú
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: Ú\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_U_MAYUS_TILDE_T;
}

{TOKEN_N_MAYUSCULA} {
    char buffer[2] = { (char)165, '\0' }; // Ñ
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: Ñ\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_N_MAYUSCULA_T;
}

"ñ" {
    char buffer[2] = { (char)241, '\0' }; // ñ
    fprintf(registra_tokens, "%d, %d: ESTO ES UNA ETIQUETA DE PAGINA WEB: ñ\n", num_lineas, num_columna);
    yylval.sval = strdup(buffer);
    return TOKEN_N_MINUSCULA_T;
}

.	{ 
		num_caracteres += yyleng; 
		error = 2; errores(num_lineas, num_columna, error);				
		num_columna += yyleng;
	}

%%