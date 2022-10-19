/*
//////////////////////////////////////
//////////////////////////////////////
///////////	STD_TYPES.h //////////////
//////////////////////////////////////
//////////////////////////////////////
*/


#ifndef STD_TYPES_H_
#define STD_TYPES_H_
typedef unsigned char uint8_t;
typedef signed char	int8_t;

typedef unsigned short int uint16_t;
typedef signed short int	int16_t;

typedef unsigned long int uint32_t;
typedef signed long int	int32_t;


#define SET_BIT(X,BIT_NO) ((X) |=(1<<BIT_NO))
#define CLR_BIT(X,BIT_NO) ((X) &=~(1<<BIT_NO))
#define TGL_BIT(X,BIT_NO) ((X) ^=(1<<BIT_NO))
#define READ_BIT(X,BIT_NO) (((X) &(1<<BIT_NO))>>BIT_NO)



#endif // !STD_TYPES_H_
