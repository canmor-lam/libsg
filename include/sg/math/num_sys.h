/**
 * num_sys.h
 * Regular number system definitions.
 */
 
#ifndef LIBSG_NUM_SYS_H
#define LIBSG_NUM_SYS_H

enum sg_num_sys {
    SGNUMSYS_MIN = 0,
    SGNUMSYS_BIN = 0, /* binary system */
    SGNUMSYS_DEC = 1, /* decimal system */
    SGNUMSYS_HEX = 2, /* hex system */
    SGNUMSYS_MAX = 2
};

#define SG_COMPUTE_BASE(sys) (sys == SGNUMSYS_DEC ? 10 : sys == SGNUMSYS_HEX ? 16 : sys == SGNUMSYS_BIN ? 2 : 0)

#endif /* LIBSG_NUM_SYS_H */
