/*******************************************************************************
*	Funciones de método http
*
*
*	Autor: Marcelo Garcia
*
*******************************************************************************/

#include "http.h"

char cartucho[]={'{','"','d','p','_','c','a','r','t','u','c','h','o','"',':','\0'};
char filtro[]={',','"','d','p','_','f','i','l','t','r','o','"',':','\0'};
char ev1[]={',','"','c','i','c','l','o','_','e','v','1','"',':','\0'};
char ev2[]={',','"','c','i','c','l','o','_','e','v','2','"',':','\0'};
char ev3[]={',','"','c','i','c','l','o','_','e','v','3','"',':','\0'};
char ev4[]={',','"','c','i','c','l','o','_','e','v','4','"',':','\0'};
char ev5[]={',','"','c','i','c','l','o','_','e','v','5','"',':','\0'};
char ev6[]={',','"','c','i','c','l','o','_','e','v','6','"',':','\0'};
char ev7[]={',','"','c','i','c','l','o','_','e','v','7','"',':','\0'};
char ev8[]={',','"','c','i','c','l','o','_','e','v','8','"',':','\0'};





httpPOST(uint16_t dp_cartucho, uint16_t dp_filtro, uint16_t ciclo_ev1, uint16_t ciclo_ev2,uint16_t ciclo_ev3,uint16_t ciclo_ev4,uint16_t ciclo_ev5,uint16_t ciclo_ev6,uint16_t ciclo_ev7,uint16_t ciclo_ev8, char  * post, char * body)
{
	post[0]='\0';
	body[0]='\0';
	strncat(post,"POST /tepelco/ HTTP/1.1",strlen("POST /tepelco/ HTTP/1.1"));
	strncat(post,"\r\n",strlen("\r\n"));
	strncat(post,"Host: 192.168.0.91:8000",strlen("Host: 192.168.0.91:8000"));
	strncat(post,"\r\n",strlen("\r\n"));
	strncat(post,"Content-Type: application/JSON",strlen("Content-Type: application/JSON"));
	strncat(post,"\r\n",strlen("\r\n"));
	strncat(post,"Content-Length:",strlen("Content-Length:"));


	// Conversión de datos recibido por ModBUS
	char _cartucho[8];
	_cartucho[0]='\0';
	INTOA( dp_cartucho,_cartucho);
	char _filtro[8];
	_filtro[0]='\0';
	INTOA( dp_filtro, _filtro);
	char _ev1[8];
	_ev1[0]='\0';
	INTOA( ciclo_ev1, _ev1);
	char _ev2[8];
	_ev2[0]='\0';
	INTOA( ciclo_ev2, _ev2);
	char _ev3[8];
	_ev3[0]='\0';
	INTOA( ciclo_ev3, _ev3);
	char _ev4[8];
	_ev4[0]='\0';
	INTOA( ciclo_ev4, _ev4);
	char _ev5[8];
	_ev5[0]='\0';
	INTOA( ciclo_ev5, _ev5);
	char _ev6[8];
	_ev6[0]='\0';
	INTOA( ciclo_ev6, _ev6);
	char _ev7[8];
	_ev7[0]='\0';
	INTOA( ciclo_ev7, _ev7);
	char _ev8[8];
	_ev8[0]='\0';
	INTOA( ciclo_ev8, _ev8);

	strncat(body,cartucho,strlen(cartucho));
	strncat(body,_cartucho,strlen(_cartucho));
	strncat(body,filtro,strlen(filtro));
	strncat(body,_filtro,strlen(_filtro));
	strncat(body,ev1,strlen(ev1));
	strncat(body,_ev1,strlen(_ev1));
	strncat(body,ev2,strlen(ev2));
	strncat(body,_ev2,strlen(_ev2));
	strncat(body,ev3,strlen(ev3));
	strncat(body,_ev3,strlen(_ev3));
	strncat(body,ev4,strlen(ev4));
	strncat(body,_ev4,strlen(_ev4));
	strncat(body,ev5,strlen(ev5));
	strncat(body,_ev5,strlen(_ev5));
	strncat(body,ev6,strlen(ev6));
	strncat(body,_ev6,strlen(_ev6));
	strncat(body,ev7,strlen(ev7));
	strncat(body,_ev7,strlen(_ev7));
	strncat(body,ev8,strlen(ev8));
	strncat(body,_ev8,strlen(_ev8));
	strncat(body,"}",strlen("}"));

	char length[5];
	INTOA(strlen(body), length);
	strncat(post,length,strlen(length));
	strncat(post,"\r\n\r\n",strlen("\r\n\r\n"));
	strncat(post,body,strlen(body));
}

//int INTOA( int a,  unsigned char *v1)   Content-Length:
