#ifndef _MIRDEF_H
#define _MIRDEF_H


#define MR_LITTLE_ENDIAN    /*��С�� */
//#define MR_BIG_ENDIAN
#define MIRACL 32
#define mr_utype int        /* the underlying type is usually int but see mrmuldv.any */
#define MR_IBITS 32         /* bits in int  */
#define MR_LBITS 32         /* bits in long */
#define mr_unsign32 unsigned int    /* 32 bit unsigned type               */


//#if defined(__GNUC__) && (defined(__i386__) || defined(__x86_64__))
//#define mr_dltype long long   /* ... long long for Unix/Linux */
//#define mr_unsign64 unsigned long long
//#elif defined(_MSC_VER) && (defined(_M_IX86) || defined(_WIN64))
//#define mr_dltype __int64   /* ... __int64 for Windows */
//#define mr_unsign64 unsigned __int64
//#else
//#error "mr_dltype undefined"
//#error "mr_unsign64 undefined"
//#endif

#define mr_dltype long   /* ... __int64 for Windows */
#define mr_unsign64 unsigned long

#define MR_NOASM
#define MR_STRIPPED_DOWN
//#define MR_GENERIC_MT//luoying del 20150914
#define MR_NOFULLWIDTH
#define MR_ALWAYS_BINARY
#define MAXBASE ((mr_small)1<<(MIRACL-2))
#define MR_KCM 8
#define MR_BITSINCHAR 8
#define LUOYING_SIMPLIFY_MIRAL  /* ����� */


#endif  /* #ifndef _MIRDEF_H */
