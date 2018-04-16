#ifndef _DES_H_
#define _DES_H_ _DES_H_

#include <stdint.h>

enum {
	DECRYPTION_MODE = 0,
	ENCRYPTION_MODE = 1
};

typedef struct {
	uint8_t k[8];
	uint8_t c[4];
	uint8_t d[4];
} key_set_t;

void generate_key(uint8_t *key);
void generate_sub_keys(key_set_t key_set[17], uint8_t *main_key);
void process_message(uint8_t *processed_piece, uint8_t *message_piece,
		key_set_t key_set[17], uint8_t mode);

#endif /* _DES_H_ */
