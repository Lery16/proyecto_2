%{ 
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <locale.h>
    #define MAX 256

    extern int yylex(void);
    extern FILE *yyin;
    extern char *yytext; 
    extern int num_lineas;
    extern int num_columna;
    extern void abrir_registro();
    extern void cerrar_registro();

    void yyerror(const char *s);
%}

%union { char *sval; }

%error-verbose

%token PAGINAWEB_T
%token SECCIONCABECERA_T FINCABECERA_T
%token SECCIONCUERPO_T FINCUERPO_T
%token SECCIONPIEDEPAGINA_T FINPIEDEPAGINA_T

%token ETIQUETANEGRITA_T ETIQUETAFINNEGRITA_T
%token ETIQUETACURSIVA_T ETIQUETAFINCURSIVA_T
%token ETIQUETASUBRAYADO_T ETIQUETAFINSUBRAYADO_T
%token ETIQUETATACHADO_T ETIQUETAFINTACHADO_T
%token ETIQUETASUBINDICE_T ETIQUETAFINSUBINDICE_T
%token ETIQUETASUPERINDICE_T ETIQUETAFINSUPERINDICE_T
%token ETIQUETATAMANO_T ETIQUETAFINTAMANO_T
%token ETIQUETASANGRADO_T ETIQUETAFINSANGRADO_T

%token ETIQUETAPARRAFOIZQ_T ETIQUETAPARRAFODER_T ETIQUETAPARRAFOCEN_T
%token ETIQUETAPARRAFO_T ETIQUETAFINPARRAFO_T

%token ETIQUETALISTA_T ETIQUETAFINLISTA_T
%token ETIQUETAELEMENTOLISTA_T ETIQUETAFINELEMENTOLISTA_T

%token ETIQUETAENLACE_T ETIQUETAFINENLACE_T
%token ETIQUETACON_T ETIQUETAFINCON_T
%token ETIQUETAMOSTRAR_T ETIQUETAFINMOSTRAR_T

%token ETIQUETATITULO_T ETIQUETAFINTITULO_T
%token ETIQUETASALTO_T ETIQUETALINEA_T
%token <sval> TEXTO_T SIMBOLO_COPYRIGHT_T SIMBOLO_FLECHA_T SIMBOLO_EURO_T SIMBOLO_REGISTRO_T SIMBOLO_MASMENOS_T SIMBOLO_MARCA_T SIMBOLO_DIVISION_T SIMBOLO_FLECHA_DOBLE_T TOKEN_A_TILDE_T TOKEN_E_TILDE_T TOKEN_I_TILDE_T TOKEN_O_TILDE_T TOKEN_U_TILDE_T TOKEN_A_MAYUS_TILDE_T TOKEN_E_MAYUS_TILDE_T TOKEN_I_MAYUS_TILDE_T TOKEN_O_MAYUS_TILDE_T TOKEN_U_MAYUS_TILDE_T TOKEN_N_MINUSCULA_T TOKEN_N_MAYUSCULA_T

%type <sval> texto_contenido texto_simple captura_texto elemento_texto lista_texto
%type <sval> texto_formato formato titulo_tag salto_tag linea_tag enlace_inicio texto_otros

%start programa

%%

programa
    : inicio cabecera cuerpo pie fin
    {
        YYACCEPT; //El parser termina inmediatamente y retorna un código de éxito (0) y No analiza más reglas.
    }
;

inicio : PAGINAWEB_T { printf("<html>\n");} ;
fin : { printf("</html>"); } ;

cabecera
    :
    | SECCIONCABECERA_T titulo_tag { printf("<head>\n <title> %s </title> </head>\n", $2); free($2); }
    | SECCIONCABECERA_T { printf("<head>\n </head>\n"); }
;

titulo_tag
    : ETIQUETATITULO_T lista_texto ETIQUETAFINTITULO_T { $$ = $2; }
    | ETIQUETATITULO_T ETIQUETAFINTITULO_T { $$ = strdup(""); }
;

cuerpo
    :
    | inicio_cuerpo contenido_cuerpo fin_cuerpo
;

inicio_cuerpo : SECCIONCUERPO_T { printf("<body>\n"); } ;
fin_cuerpo : { printf("</body>\n"); } ;

contenido_cuerpo : contenido_cuerpoI ;

contenido_cuerpoI
    : lista_contenido_cuerpo
    | contenido_cuerpoI lista_contenido_cuerpo
;

lista_contenido_cuerpo
    : parrafo_tag
    | lista_tag
    | enlace_tag
    | salto_tag
    | linea_tag
;

texto_contenido
    : lista_texto
    {
        if ($1) $$ = strdup($1);
        else $$ = strdup("");
        printf($$);
        free($1);
    }
;

lista_texto
    : elemento_texto
    {
        $$ = strdup($1); free($1);
    }
    | lista_texto elemento_texto
    {
        size_t len1 = $1 ? strlen($1) : 0;
        size_t len2 = $2 ? strlen($2) : 0;
        $$ = (char *)malloc(len1 + len2 + 2);
        if (!$$) {
            yyerror("Error de memoria");
            $$ = strdup("");
        } else {
            strcpy($$, $1 ? $1 : "");
            if (len1 > 0) strcat($$, " ");
            strcat($$, $2 ? $2 : "");
        }
        free($1);
        free($2);
    }
;

elemento_texto
    : texto_simple { $$ = strdup($1); free($1); }
    | texto_formato { $$ = strdup($1); free($1); }
    | texto_otros { $$ = strdup($1); free($1); }
;

texto_simple
    : captura_texto { $$ = strdup($1); free($1); }
;

texto_otros
    : SIMBOLO_COPYRIGHT_T { $$ = strdup($1); free($1); }
    | SIMBOLO_FLECHA_T { $$ = strdup($1); free($1); }
    | SIMBOLO_EURO_T { $$ = strdup($1); free($1); }
    | SIMBOLO_REGISTRO_T { $$ = strdup($1); free($1); }
    | SIMBOLO_MASMENOS_T { $$ = strdup($1); free($1); }
    | SIMBOLO_MARCA_T { $$ = strdup($1); free($1); }
    | SIMBOLO_DIVISION_T { $$ = strdup($1); free($1); }
    | SIMBOLO_FLECHA_DOBLE_T { $$ = strdup($1); free($1); }
    | TOKEN_A_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_E_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_I_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_O_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_U_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_A_MAYUS_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_E_MAYUS_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_I_MAYUS_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_O_MAYUS_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_U_MAYUS_TILDE_T { $$ = strdup($1); free($1); }
    | TOKEN_N_MINUSCULA_T { $$ = strdup($1); free($1); }
    | TOKEN_N_MAYUSCULA_T { $$ = strdup($1); free($1); }
;

captura_texto
    : TEXTO_T { $$ = $1; }
    | salto_tag { $$ = $1; }
    | linea_tag { $$ = $1; }
;

texto_formato
    : formato
;

etiqueta_inicio_formato
    : ETIQUETANEGRITA_T      { printf("<b>"); }
    | ETIQUETACURSIVA_T      { printf("<i>"); }
    | ETIQUETASUBRAYADO_T    { printf("<u>"); }
    | ETIQUETATACHADO_T      { printf("<s>"); }
    | ETIQUETASUBINDICE_T    { printf("<sub>"); }
    | ETIQUETASUPERINDICE_T  { printf("<sup>"); }
    | ETIQUETATAMANO_T       { printf("<font size=\"3\">"); }
    | ETIQUETASANGRADO_T     { printf("<blockquote>"); }
;

etiqueta_fin_formato
    : ETIQUETAFINNEGRITA_T      { printf("</b>"); }
    | ETIQUETAFINCURSIVA_T      { printf("</i>"); }
    | ETIQUETAFINSUBRAYADO_T    { printf("</u>"); }
    | ETIQUETAFINTACHADO_T      { printf("</s>"); }
    | ETIQUETAFINSUBINDICE_T    { printf("</sub>"); }
    | ETIQUETAFINSUPERINDICE_T  { printf("</sup>"); }
    | ETIQUETAFINTAMANO_T       { printf("</font>"); }
    | ETIQUETAFINSANGRADO_T     { printf("</blockquote>"); }
;

formato
    : etiqueta_inicio_formato texto_contenido etiqueta_fin_formato
    { $$ = strdup(""); }
;

etiqueta_inicio_parrafo
    : ETIQUETAPARRAFO_T { printf("<p>\n"); }
    | ETIQUETAPARRAFOIZQ_T { printf("<p align=\"left\">\n"); }
    | ETIQUETAPARRAFODER_T { printf("<p align=\"right\">\n"); }
    | ETIQUETAPARRAFOCEN_T { printf("<p align=\"center\">\n"); }
;

etiqueta_fin_parrafo
    : ETIQUETAFINPARRAFO_T { printf("</p>\n"); }
;

parrafo_tag
    : etiqueta_inicio_parrafo texto_contenido etiqueta_fin_parrafo
    | etiqueta_inicio_parrafo etiqueta_fin_parrafo
;

lista_tag
    : etiqueta_lista_inicio lista etiqueta_lista_fin
    | etiqueta_lista_inicio etiqueta_lista_fin
    { printf("<ul>\n</ul>\n"); }
;

etiqueta_lista_inicio
    : ETIQUETALISTA_T
    { printf("<ul>\n"); }
;

etiqueta_lista_fin
    : ETIQUETAFINLISTA_T
    { printf("</ul>\n"); }
;

lista
    : 
    | elementos_lista
    | lista elementos_lista
;

elementos_lista
    : elemento_lista_inicio contenido_de_la_lista elemento_lista_fin
    | elemento_lista_inicio elemento_lista_fin
    { printf("<li></li>\n"); }
;

contenido_de_la_lista : texto_contenido lista ;

elemento_lista_inicio
    : ETIQUETAELEMENTOLISTA_T
    { printf("<li>"); }
;

elemento_lista_fin
    : ETIQUETAFINELEMENTOLISTA_T
    { printf("</li>\n"); }
;

enlace_tag
    : enlace_inicio mostrar_tag enlace_fin
    | enlace_inicio enlace_fin
;

enlace_inicio
    : ETIQUETAENLACE_T ETIQUETACON_T texto_simple ETIQUETAFINCON_T
    { printf("<a href=\"%s\">\n", $3); free($3); }
    | ETIQUETAENLACE_T ETIQUETACON_T
    { $$ = strdup(""); }
;

enlace_fin
    : ETIQUETAFINENLACE_T
    { printf("\n</a>\n");}
;

mostrar_tag
    : ETIQUETAMOSTRAR_T texto_contenido ETIQUETAFINMOSTRAR_T
    | ETIQUETAMOSTRAR_T ETIQUETAFINMOSTRAR_T
;

salto_tag
    : ETIQUETASALTO_T
    {
        printf("<br>\n");
        $$ = strdup("<br>\n");
    }
;

linea_tag
    : ETIQUETALINEA_T
    {
        printf("<hr>\n");
        $$ = strdup("<hr>\n");
    }
;

pie
    :
    | in_ppagina contenido_ppagina fin_ppagina
    | in_ppagina fin_ppagina
;

contenido_ppagina
    : contenido_ppagina_item
    | contenido_ppagina contenido_ppagina_item
;

contenido_ppagina_item
    : parrafo_tag
    | lista_tag
    | enlace_tag
    | texto_contenido
;

in_ppagina : SECCIONPIEDEPAGINA_T { printf("\n<footer>\n"); }
fin_ppagina : FINPIEDEPAGINA_T { printf("\n</footer>\n"); }

%%

void yyerror(const char *s) 
{ fprintf(stderr,"\nERROR SINTACTICO: %s\nEN LA LINEA %d, COLUMNA %d.\nTOKEN A CORREGIR: '%s'\n", s, num_lineas, num_columna, yytext); }

int main(int argc, char *argv[]) 
{
    abrir_registro();
    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("No se pudo abrir el archivo de entrada");
        return 1;
    }
    yyparse();
    cerrar_registro();
    return 0;
}