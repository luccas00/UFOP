typedef struct circulo_est
{
    float x;
    float y;
    float r;

}circulo;

/* Cria um circulo com centro (x,y) e raio r */
circulo *circ_cria (float x, float y, float r) ;

/* Libera a memoria de um Circulo */
void circ_libera (circulo *qualquer) ;

/* Calcula a area de um circulo */
float circ_area (circulo *qualquer) ;

/* Verifica se dois circulos tem o mesmo centro */
int circ_concentricos (circulo *c_1, circulo *c_2) ;

/* Retorna o raio de um circulo */
float circ_raio (circulo *qualquer) ;

