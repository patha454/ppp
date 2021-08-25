/**
 * \file protocol.h
 *
 * `protocol.n` defines constants and methods relating to the protocol field in
 * a PPP frame.
 *
 * \author H Paterson
 * \copyright BSL-1.0
 */

#ifndef PPP_PROTOCOL_H_
#define PPP_PROTOCOL_H_

/**
 * \typedef Protocol
 *
 * `Protocol`s declares protocol values for the various network layer
 * protocols which can be carried over the PPP link.
 */
typedef enum {
    /** Unknown or invalid protocol. */
    PRTC_ERROR = 0x0000,

    /** Padding protocol. */
    PRTC_PADDING = 0x001,

    /** Link Control Protocol. */
    PRTC_LCP = 0xc021,

    /** Password Authentication Protocol. */
    PRTC_PAP = 0xc023,

    /** Link Quality Report. */
    PRTC_LINK_QUALITY_REPORT = 0xc025,

    /** Challenge Handshake Authentication Protocol. */
    PRTC_CHAP = 0xc223,
} Protocol

#endif
