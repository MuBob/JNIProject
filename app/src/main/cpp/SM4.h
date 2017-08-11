



typedef unsigned char		U8;
typedef unsigned short int		U16;
typedef unsigned int		U32;
typedef unsigned long long	U64;

#define ROL(x, n)		(((x)<<(n))|((x)>>(32-n)))
#define ROR(x, n)		(((x)>>(n))|((x)<<(32-n)))


void U8ToU32(U8 *input,U32 *output,U32 len);
void U32ToU8(U32 *input,U8 *output,U32 len);
void U8ToU32r(U8 *input,U32 *output,U32 len);
void U32ToU8r(U32 *input,U8 *output,U32 len);


U32 SMS4_CBC_Encrypt(U8 *IV, U8 *p,U32 p_len, U8 *key, U32 key_len, U8 *c, U32 *c_len);//更新IV
/***********************************************************************
U32 SMS4_CBC_Encrypt(U8 *IV, U8 *p,U32 p_len, U8 *key, U32 key_len, U8 *c, U32 *c_len)
功能：SMS4加密CBC模式
输入：IV 初始值（16字节）
	  p  明文（16字节的倍数）
	  p_len 明文长度（以字节计）
	  key 密钥（16字节）
	  key_len 密钥长度（以字节计）

输出：IV 初始值（16字节，更新后）
	  c 密文（16字节的倍数）
	  c_len 密文长度（以字节计）

*************************************************************************/
U32 SMS4_CBC_Decrypt(U8 *IV, U8 *c,U32 c_len, U8 *key, U32 key_len, U8 *p, U32 *p_len);//更新IV
/***********************************************************************
U32 SMS4_CBC_Decrypt(U8 *IV, U8 *c,U32 c_len, U8 *key, U32 key_len, U8 *p, U32 *p_len)
功能：SMS4解密CBC模式
输入：IV 初始值（16字节）
	  c  密文（16字节的倍数）
	  c_len 密文长度（以字节计）
	  key 密钥（16字节）
	  key_len 密钥长度（以字节计）

输出：IV 初始值（16字节，更新后）
	  p 明文（16字节的倍数）
	  p_len 明文长度（以字节计）

*************************************************************************/

void U8ToU32(U8 *input,U32 *output,U32 len)
{
	U32 i;
	for(i=0; i<len; i++)
	{
		output[i]=(U32)(input[4*i])<<24;
		output[i]|=(U32)(input[4*i+1])<<16;
		output[i]|=(U32)(input[4*i+2])<<8;
		output[i]|=(U32)(input[4*i+3]);
	}

}

void U32ToU8(U32 *input,U8 *output,U32 len)
{
	U32 i;
	for(i=0; i<len; i++)
	{
		output[4*i]=(U8)((input[i]>>24)&0xff);
		output[4*i+1]=(U8)((input[i]>>16)&0xff);
		output[4*i+2]=(U8)((input[i]>>8)&0xff);
		output[4*i+3]=(U8)(input[i]&0xff);
	}

}

void U8ToU32r(U8 *input,U32 *output,U32 len)
{
	U32 i;
	for(i=0; i<len; i++)
	{
		output[i]=(U32)(input[4*i]);
		output[i]|=(U32)(input[4*i+1])<<8;
		output[i]|=(U32)(input[4*i+2])<<16;
		output[i]|=(U32)(input[4*i+3])<<24;
	}

}

void U32ToU8r(U32 *input,U8 *output,U32 len)
{
	U32 i;
	for(i=0; i<len; i++)
	{
		output[4*i+3]=(U8)((input[i]>>24)&0xff);
		output[4*i+2]=(U8)((input[i]>>16)&0xff);
		output[4*i+1]=(U8)((input[i]>>8)&0xff);
		output[4*i]=(U8)(input[i]&0xff);
	}

}