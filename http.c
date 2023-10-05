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
char deviceId[]={',','"','d','e','v','I','d','"',':','\0'};





httpPOST(char * endpoint, char* server_ip, char * port,uint16_t dp_cartucho, uint16_t dp_filtro, uint16_t ciclo_ev1, uint16_t ciclo_ev2,uint16_t ciclo_ev3,uint16_t ciclo_ev4,uint16_t ciclo_ev5,uint16_t ciclo_ev6,uint16_t ciclo_ev7,uint16_t ciclo_ev8, uint16_t devId, char  * post, char * body, int max_char)
{
	post[0]='\0';
	body[0]='\0';
	strncat(post,"POST ",strlen("POST "));
	strncat(post,endpoint,strlen(endpoint));
	strncat(post,"/ HTTP/1.1",strlen("/ HTTP/1.1"));
	strncat(post,"\r\n",strlen("\r\n"));

	strncat(post,"Host: ",strlen("Host: "));
	strncat(post,server_ip,strlen(server_ip));
	strncat(post,":",1);
	strncat(post,port,strlen(port));



	strncat(post,"\r\n",strlen("\r\n"));
	strncat(post,"Content-Type: application/JSON",strlen("Content-Type: application/JSON"));
	strncat(post,"\r\n",strlen("\r\n"));
	strncat(post,"Content-Length:",strlen("Content-Length:"));


	// Conversión de datos recibido por ModBUS
	char _cartucho[8];
	_cartucho[0]='\0';
	FTOA( dp_cartucho,_cartucho,2);
	char _filtro[8];
	_filtro[0]='\0';
	FTOA( dp_filtro, _filtro,2);//INTOA( dp_filtro, _filtro);//
	char _ev1[8];
	_ev1[0]='\0';
	FTOA( ciclo_ev1, _ev1,2);
	char _ev2[8];
	_ev2[0]='\0';
	FTOA( ciclo_ev2, _ev2,2);
	char _ev3[8];
	_ev3[0]='\0';
	FTOA( ciclo_ev3, _ev3,2);
	char _ev4[8];
	_ev4[0]='\0';
	INTOA( ciclo_ev4, _ev4);
	char _ev5[8];
	_ev5[0]='\0';
	FTOA( ciclo_ev5, _ev5,2);
	char _ev6[8];
	_ev6[0]='\0';
	FTOA( ciclo_ev6, _ev6,2);
	char _ev7[8];
	_ev7[0]='\0';
	FTOA( ciclo_ev7, _ev7,2);
	char _ev8[8];
	_ev8[0]='\0';
	FTOA( ciclo_ev8, _ev8,2);
	char _devId[8];
	_devId[0]='\0';
	INTOA(devId, _devId);

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
	strncat(body,deviceId,strlen(deviceId));
	strncat(body,_devId,strlen(_devId));

	strncat(body,"}",strlen("}"));

	char length[5];
	INTOA(strlen(body), length);
	strncat(post,length,strlen(length));
	strncat(post,"\r\n\r\n",strlen("\r\n\r\n"));
	if(strlen(body) < max_char)
	{
		strncat(post,body,strlen(body));
		return 1 ;
	}
		else
		{
			return 0;
		}
}

//int INTOA( int a,  unsigned char *v1)   Content-Length:
