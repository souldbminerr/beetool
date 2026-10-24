#ifndef HACTOOL_RSA_H
#define HACTOOL_RSA_H

#include "mbedtls/rsa.h"

#define RSA_2048_BYTES 0x100
#define RSA_2048_BITS (RSA_2048_BYTES*8)

int rsa_pss_verify(const void *data, size_t len, const unsigned char *signature, const unsigned char *modulus, size_t modulus_size_bytes);
int rsa2048_pkcs1_verify(const void *data, size_t len, const unsigned char *signature, const unsigned char *modulus);
int rsa2048_oaep_decrypt_verify(void *out, size_t max_out_len, const unsigned char *signature, const unsigned char *modulus, const unsigned char *exponent, size_t exponent_len, const unsigned char *label_hash, size_t *out_len);

#endif
