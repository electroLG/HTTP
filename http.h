/*******************************************************************************
*	Header para funciones de método http
*
*
*	Autor: Marcelo Garcia
*
******************************************************************************/
#include "main.h"


int httpPOST( char*, char*, char*, uint16_t , uint16_t , uint16_t , uint16_t , uint16_t , uint16_t , uint16_t , uint16_t , uint16_t , uint16_t ,uint16_t , char*  , char*, int );

/*
POST /tepelco/ HTTP/1.1
Host: 192.168.0.91:8000
Content-Type: application/JSON
Content-Length:172

{"dp_cartucho":220,"dp_filtro":1124,"ciclo_ev1":1234,"ciclo_ev2":1234,"ciclo_ev3":1234,"ciclo_ev4":1234,"ciclo_ev5":1234,"ciclo_ev6":1234,"ciclo_ev7":1234,"ciclo_ev8":1234}

*/
