/*******************************************************************************
*	Funciones de método http
*
*
*	Autor: Marcelo Garcia
*
*******************************************************************************/

#include "http.h"

/*char cartucho[]={'{','"','d','p','_','c','a','r','t','u','c','h','o','"',':','\0'};
char filtro[]={',','"','d','p','_','f','i','l','t','r','o','"',':','\0'};
char ev1[]={',','"','c','i','c','l','o','_','e','v','1','"',':','\0'};
char ev2[]={',','"','c','i','c','l','o','_','e','v','2','"',':','\0'};
char ev3[]={',','"','c','i','c','l','o','_','e','v','3','"',':','\0'};
char ev4[]={',','"','c','i','c','l','o','_','e','v','4','"',':','\0'};
char ev5[]={',','"','c','i','c','l','o','_','e','v','5','"',':','\0'};
char ev6[]={',','"','c','i','c','l','o','_','e','v','6','"',':','\0'};
char ev7[]={',','"','c','i','c','l','o','_','e','v','7','"',':','\0'};
char ev8[]={',','"','c','i','c','l','o','_','e','v','8','"',':','\0'};*/

char dd1[]={'{','"','d','1','"',':','\0'};
char dd2[]={',','"','d','2','"',':','\0'};
char dd3[]={',','"','d','3','"',':','\0'};
char dd4[]={',','"','d','4','"',':','\0'};
char dd5[]={',','"','d','5','"',':','\0'};
char dd6[]={',','"','d','6','"',':','\0'};
char dd7[]={',','"','d','7','"',':','\0'};
char dd8[]={',','"','d','8','"',':','\0'};
char dd9[]={',','"','d','9','"',':','\0'};
char dd10[]={',','"','d','1','0','"',':','\0'};
char dd11[]={',','"','d','1','1','"',':','\0'};
char dd12[]={',','"','d','1','2','"',':','\0'};
char dd13[]={',','"','d','1','3','"',':','\0'};
char dd14[]={',','"','d','1','4','"',':','\0'};
char dd15[]={',','"','d','1','5','"',':','\0'};
char dd16[]={',','"','d','1','6','"',':','\0'};

char data[][10]={{'{','"','d','1','"',':','\0'},
				 {',','"','d','2','"',':','\0'},
				 {',','"','d','3','"',':','\0'},
				 {',','"','d','4','"',':','\0'},
				 {',','"','d','5','"',':','\0'},
				 {',','"','d','6','"',':','\0'},
				 {',','"','d','7','"',':','\0'},
				 {',','"','d','8','"',':','\0'},
				 {',','"','d','9','"',':','\0'},
				 {',','"','d','1','0','"',':','\0'},
				 {',','"','d','1','1','"',':','\0'},
				 {',','"','d','1','2','"',':','\0'},
				 {',','"','d','1','3','"',':','\0'},
				 {',','"','d','1','4','"',':','\0'},
				 {',','"','d','1','5','"',':','\0'},
				 {',','"','d','1','6','"',':','\0'}};



char deviceId[]={',','"','d','e','v','I','d','"',':','\0'};


httpPOST(char * endpoint, char* server_ip, char * port,uint16_t d1, uint16_t d2, uint16_t d3, uint16_t d4,uint16_t d5,uint16_t d6,uint16_t d7,uint16_t d8,uint16_t d9,uint16_t d10, uint16_t d11,uint16_t d12,uint16_t d13,uint16_t d14,uint16_t d15,uint16_t d16, uint16_t devId, char  * post, char * body, int max_char)
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
	char _d1[8];
	_d1[0]='\0';
	INTOA( d1, _d1);//FTOA( d1,_d1,2);

	char _d2[8];
	_d2[0]='\0';
	INTOA( d2, _d2);//FTOA( d2, _d2,2);//INTOA( dp_filtro, _filtro);//

	char _d3[8];
	_d3[0]='\0';
	INTOA( d3, _d3);//FTOA( d3, _d3,2);

	char _d4[8];
	_d4[0]='\0';
	INTOA( d4, _d4);//FTOA( d4, _d4,2);

	char _d5[8];
	_d5[0]='\0';
	INTOA( d5, _d5);//FTOA( d5, _d5,2);

	char _d6[8];
	_d6[0]='\0';
	INTOA( d6, _d6);//INTOA( d6, _d6);

	char _d7[8];
	_d7[0]='\0';
	INTOA( d7, _d7);//FTOA( d7, _d7,2);

	char _d8[8];
	_d8[0]='\0';
	INTOA( d8, _d8);//FTOA( d8, _d8,2);

	char _d9[8];
	_d9[0]='\0';
	INTOA( d9, _d9);//FTOA( d9, _d9,2);

	char _d10[8];
	_d10[0]='\0';
	INTOA( d10, _d10);//FTOA( d10, _d10,2);

	char _d11[8];
	_d11[0]='\0';
	INTOA( d11, _d11);//FTOA( d11, _d11,2);

	char _d12[8];
	_d12[0]='\0';
	INTOA( d12, _d12);//FTOA( d11, _d11,2);

	char _d13[8];
	_d13[0]='\0';
	INTOA( d13, _d13);//FTOA( d11, _d11,2);

	char _d14[8];
	_d14[0]='\0';
	INTOA( d14, _d14);//FTOA( d11, _d11,2);

	char _d15[8];
	_d15[0]='\0';
	INTOA( d15, _d15);//FTOA( d11, _d11,2);

	char _d16[8];
	_d16[0]='\0';
	INTOA( d16, _d16);//FTOA( d11, _d11,2);

	char _devId[8];
	_devId[0]='\0';
	INTOA(devId, _devId);

	strncat(body,dd1,strlen(dd1));
	strncat(body,_d1,strlen(_d1));

	strncat(body,dd2,strlen(dd2));
	strncat(body,_d2,strlen(_d2));

	strncat(body,dd3,strlen(dd3));
	strncat(body,_d3,strlen(_d3));

	strncat(body,dd4,strlen(dd4));
	strncat(body,_d4,strlen(_d4));

	strncat(body,dd5,strlen(dd5));
	strncat(body,_d5,strlen(_d5));

	strncat(body,dd6,strlen(dd6));
	strncat(body,_d6,strlen(_d6));

	strncat(body,dd7,strlen(dd7));
	strncat(body,_d7,strlen(_d7));

	strncat(body,dd8,strlen(dd8));
	strncat(body,_d8,strlen(_d8));

	strncat(body,dd9,strlen(dd9));
	strncat(body,_d9,strlen(_d9));

	strncat(body,dd10,strlen(dd10));
	strncat(body,_d10,strlen(_d10));

	strncat(body,dd11,strlen(dd11));
	strncat(body,_d11,strlen(_d11));

	strncat(body,dd12,strlen(dd12));
	strncat(body,_d12,strlen(_d12));

	strncat(body,dd13,strlen(dd13));
	strncat(body,_d13,strlen(_d13));

	strncat(body,dd14,strlen(dd14));
	strncat(body,_d14,strlen(_d14));

	strncat(body,dd15,strlen(dd15));
	strncat(body,_d15,strlen(_d15));

	strncat(body,dd16,strlen(dd16));
	strncat(body,_d16,strlen(_d16));

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

httpPOST2(char * endpoint, char* server_ip, char * port,  uint16_t * vect_data, uint8_t * decimal,int cdad, uint16_t devId, char  * post, char * body, int max_char)
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

	char _devId[8];
	_devId[0]='\0';
	INTOA(devId, _devId);
	char d[8];
	d[0]='\0';
	for (int i=0; i < cdad;i++)
	{
		FTOA(vect_data[i],d,decimal[i]);
		strncat(body,data[i],strlen(data[i]));
		strncat(body,d,strlen(d));
		d[0]='\0';
	}
	// Conversión de datos recibido por ModBUS

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
