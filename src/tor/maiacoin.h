/* Copyright (c) 2014, Ocultcoin Developers */
/* See LICENSE for licensing information */

/**
 * \file Ocultcoin.h
 * \brief Headers for Ocultcoin.cpp
 **/

#ifndef TOR_Ocultcoin_H
#define TOR_Ocultcoin_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* Ocultcoin_tor_data_directory(
    );

    char const* Ocultcoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

