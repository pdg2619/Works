#include <stdio.h>    /* printf�֐��𗘗p���邽�߂ɃC���N���[�h����. */

#define NUM_MATRIX_ROW       6    /* �萔�}�N��NUM_MATRIX_ROW��6�Œ�`����. */
#define NUM_MATRIX_COLUMN    6    /* �萔�}�N��NUM_MATRIX_COLUMN��6�Œ�`����. */

void id_mat_set(int a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN])    /* int�^�̓񎟌��z��a[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]�ɒP�ʍs�������, �l��߂��Ȃ��֐�. */
{
    int i, j;    /* int�^�̕ϐ�i, j��錾����. */

    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            a[i][j] = 0;    /* a[i][j]��0��������. */
        }
        a[i][i] = 1;    /* a[i][i]��1��������. */
    }
}

int main(void)    /* main�֐����J�n����. */
{
    int i, j, mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN];    /* int�^�̕ϐ�i, j, �y��int�^�̓񎟌��z��mat_i[NUM_MATRIX_ROW][NUM_MATRIX_COLUMN]��錾����. */

    id_mat_set(mat_i);    /* mat_i�������Ƃ��ēn��, �֐�id_mat_set���Ăяo��. */

    printf("Identity Matrix E\n");    /* Identity Matrix E�ƕ\������. */
    for ( i = 0; i < NUM_MATRIX_ROW; i++ ) {    /* ��������:i = 0, ��������:i < NUM_MATRIX_ROW, �X�V����:i++�Ƃ���for�������s����. */
        for ( j = 0; j < NUM_MATRIX_COLUMN; j++ ) {    /* ��������:j = 0, ��������:j < NUM_MATRIX_COLUMN, �X�V����:j++�Ƃ���for�������s����. */
            printf("%2d  ", mat_i[i][j]);    /* mat_i[i][j]�̒l��\������. */
        }
        printf("\n");    /* �\���̉��s���s��. */
    }

    return (0);    /* 0��߂���main�֐����I������. */
}
