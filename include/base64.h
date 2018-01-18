
#ifndef BASE64_H
#define BASE64_H

/* Add include files here */

#ifdef __cplusplus
extern "C" {
#endif

int base64_encode(
    const unsigned char *in,
    unsigned long inlen,
    unsigned char *out,
    unsigned long *outlen);

#ifdef __cplusplus
}
#endif

#endif /* BASE64_H */
