/* 
 * trfStubInit.c --
 *
 *	This file contains the initializers for the Trf stub vectors.
 *
 */

#include "transformInt.h"

/*
 * WARNING: The contents of this file is automatically generated by the
 * tools/genStubs.tcl script. Any modifications to the function declarations
 * below should be made in the generic/trf.decls script.
 */

/* !BEGIN!: Do not edit below this line. */

TrfIntStubs trfIntStubs = {
    TCL_STUB_MAGIC,
    NULL,
};

static TrfStubHooks trfStubHooks = {
    &trfIntStubs
};

TrfStubs trfStubs = {
    TCL_STUB_MAGIC,
    &trfStubHooks,
    Trf_IsInitialized, /* 0 */
    Trf_Register, /* 1 */
    Trf_ConverterOptions, /* 2 */
    Trf_LoadLibrary, /* 3 */
    Trf_LoadFailed, /* 4 */
    Trf_RegisterMessageDigest, /* 5 */
    Trf_XorBuffer, /* 6 */
    Trf_ShiftRegister, /* 7 */
    Trf_FlipRegisterLong, /* 8 */
    Trf_FlipRegisterShort, /* 9 */
};

/* !END!: Do not edit above this line. */