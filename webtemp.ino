/** 
 * @file
 */
 

#include "slre.h"

#include "HttpRequest.h"
#include "HttpResponse.h"

#include <map>
#include <list>

class Welcome : public HttpResponse {
protected:
    Stream& printBody(Stream& aStream) const {
        aStream.print(
"<html> \
    <body> \
        <h1>Welcome</h1> \
        <p>Bienvenue sur le serveur SparkCore <img src='spark.png' alt='logo spark' /></p> \
        <p>Avec les liens ci-dessous, vous pouvez : \
        <ul> \
            <li><a href='/led/on'>Allumer</a></li> \
            <li><a href='/led/off'>Eteindre</a></li> \
        </ul> \
        </p> \
    </body>\n \
</html>\n");
        return aStream;
    }
    
public:
};

const Welcome welcome;

const uint8_t IMAGE_SPARK[] = {0x89,0x50,0x4e,0x47,0x0d,0x0a,0x1a,0x0a,0x00,0x00,0x00,0x0d,0x49,0x48,0x44,0x52,0x00,0x00,0x00,0x3a,0x00,0x00,0x00,0x3b,0x08,0x03,0x00,0x00,0x00,0x1d,0x39,0x69,0xbf
,0x00,0x00,0x03,0x00,0x50,0x4c,0x54,0x45,0x54,0x9e,0xbc,0xa4,0xd2,0xe4,0x7c,0x9e,0xac,0x74,0xba,0xd4,0x14,0xb6,0xec,0x8c,0xba,0xcc,0xd4,0xea,0xec,0xd4,0xd2,0xcc
,0x0c,0xb2,0xec,0x74,0xa6,0xbc,0x44,0xb6,0xdc,0xc4,0xda,0xe4,0x44,0xba,0xec,0x34,0xaa,0xd4,0xa4,0xae,0xac,0x74,0xca,0xec,0xbc,0xba,0xb4,0x9c,0xc6,0xd4,0xdc,0xde
,0xe4,0x2c,0xaa,0xdc,0xcc,0xc6,0xc4,0xb4,0xde,0xec,0x9c,0xa2,0xa4,0x84,0xc6,0xdc,0x8c,0xb2,0xbc,0x64,0xc2,0xe4,0x5c,0xaa,0xc4,0x34,0xb6,0xe4,0xf4,0xf6,0xf4,0xcc
,0xda,0xdc,0x5c,0xb6,0xd4,0x8c,0xd2,0xec,0x5c,0xc6,0xec,0x5c,0xa2,0xbc,0xec,0xea,0xec,0xd4,0xe2,0xe4,0x8c,0xa2,0xac,0xb4,0xb6,0xb4,0xd4,0xc6,0xc4,0x04,0xb2,0xf4
,0x2c,0xb2,0xe4,0x8c,0xc6,0xdc,0xc4,0xd2,0xdc,0x8c,0xae,0xbc,0x4c,0xbe,0xe4,0x4c,0xb2,0xd4,0xb4,0xae,0xac,0xc4,0xc2,0xc4,0xdc,0xe6,0xe4,0x3c,0xa6,0xcc,0x1c,0xb6
,0xec,0xac,0xba,0xbc,0xe4,0xf2,0xf4,0x5c,0xc2,0xec,0x44,0xaa,0xcc,0x94,0xb2,0xbc,0x54,0xb2,0xd4,0xa4,0xd6,0xec,0xc4,0xe2,0xf4,0x84,0xa6,0xac,0x74,0xc2,0xdc,0xd4
,0xea,0xf4,0x1c,0xae,0xe4,0x7c,0xae,0xbc,0x44,0xba,0xe4,0xc4,0xc2,0xbc,0x9c,0xce,0xe4,0x9c,0xaa,0xac,0x6c,0xb2,0xcc,0x2c,0xba,0xf4,0xc4,0xe2,0xec,0x8c,0xce,0xe4
,0xa4,0xc2,0xcc,0xbc,0xda,0xe4,0xcc,0xd2,0xd4,0x4c,0xc2,0xec,0x2c,0xae,0xe4,0xc4,0xce,0xcc,0x64,0xaa,0xc4,0x3c,0xbe,0xec,0xdc,0xda,0xdc,0x5c,0xbe,0xe4,0x64,0xc6
,0xec,0xb4,0xb2,0xb4,0xd4,0xe2,0xec,0xb4,0xd2,0xdc,0x84,0xba,0xd4,0xc4,0xde,0xec,0xbc,0xba,0xbc,0x9c,0xce,0xdc,0x3c,0xae,0xdc,0xc4,0xc6,0xcc,0x2c,0xb6,0xec,0x5c
,0xa6,0xc4,0xec,0xf2,0xf4,0xd4,0xce,0xcc,0x8c,0xca,0xe4,0xdc,0xe6,0xec,0x44,0xaa,0xd4,0x94,0xb6,0xc4,0x1c,0xb2,0xec,0xdc,0xd2,0xd4,0x4c,0xa6,0xc4,0x74,0xa2,0xb4
,0x0c,0xb6,0xf4,0x54,0xb6,0xdc,0xd4,0xde,0xe4,0x74,0xce,0xf4,0xec,0xe2,0xe4,0x2c,0xae,0xdc,0xb4,0xe2,0xf4,0x5c,0xaa,0xcc,0x64,0xbe,0xdc,0x9c,0xda,0xf4,0x94,0xa6
,0xb4,0x3c,0xb2,0xdc,0x8c,0xca,0xdc,0xb4,0xb2,0xac,0x4c,0xa6,0xcc,0x1c,0xb6,0xf4,0xa4,0xbe,0xcc,0xa4,0xb2,0xbc,0xa4,0xda,0xf4,0xe4,0xee,0xf4,0x74,0xae,0xc4,0xae
,0xaa,0xac,0xc9,0xe6,0xec,0xe0,0xde,0xdc,0x6c,0xca,0xf4,0x7c,0xb6,0xcc,0xfc,0xfe,0xfc,0x74,0xc6,0xe4,0xb4,0xce,0xdc,0x44,0xc2,0xf4,0xac,0xb2,0xb4,0x9e,0xa6,0xac
,0xb4,0xbe,0xc4,0xb4,0xd6,0xe4,0x54,0xa2,0xc4,0x74,0xbe,0xdc,0x84,0xaa,0xbc,0x84,0xce,0xec,0x9c,0xca,0xdc,0x6c,0xba,0xd4,0x9c,0xd6,0xec,0xec,0xee,0xf4,0xd4,0xca
,0xcc,0xd4,0xd6,0xdc,0xb4,0xc2,0xcc,0xcc,0xbe,0xbc,0xcc,0xca,0xcc,0x3c,0xba,0xec,0x84,0xca,0xe4,0x54,0xc6,0xf4,0x7f,0xa6,0xb4,0x3c,0xb2,0xe4,0xe4,0xea,0xec,0x8c
,0xb2,0xc4,0x6c,0xa2,0xbc,0x14,0xb2,0xf4,0xec,0xe6,0xe4,0x84,0xc2,0xdc,0x54,0xba,0xe4,0x6c,0xbe,0xe4,0x84,0xa2,0xac,0x7c,0xaa,0xbc,0xcc,0xde,0xe4,0x49,0xbe,0xec
,0x3c,0xae,0xd4,0xe2,0xe2,0xe4,0xbc,0xe2,0xec,0x6c,0xc6,0xe4,0xd4,0xde,0xdc,0x94,0xa6,0xac,0xcc,0xd6,0xdc,0xaa,0xda,0xec,0xdc,0xee,0xf4,0x24,0xb2,0xe4,0xd4,0xd6
,0xd4,0x6c,0xae,0xc4,0x6a,0xca,0xec,0x8c,0xbe,0xd4,0xc4,0xbe,0xbc,0xbc,0xca,0xcc,0x31,0xba,0xec,0x48,0xae,0xd4,0x14,0xba,0xf4,0x57,0xae,0xcc,0x24,0xba,0xf4,0x74
,0xbe,0xd4,0xcc,0xca,0xc4,0xec,0xee,0xec,0xd4,0xca,0xc4,0xd4,0xe6,0xec,0xdc,0xd6,0xd4,0x54,0xba,0xdc,0xa4,0xb6,0xbc,0xb4,0xc6,0xcc,0xac,0xd2,0xe4,0xdc,0xea,0xec
,0x14,0xb2,0xec,0x4c,0xb6,0xdc,0xcc,0xda,0xe4,0x3c,0xaa,0xd4,0xac,0xae,0xac,0x7c,0xca,0xec,0xc4,0xba,0xb4,0x34,0xaa,0xdc,0xbc,0xde,0xec,0x64,0xb6,0xd4,0x94,0xd2
,0xec,0x64,0xa2,0xbc,0x94,0xa2,0xac,0xbc,0xb6,0xb4,0x0c,0xb2,0xf4,0x94,0xc6,0xdc,0x94,0xae,0xbc,0x54,0xbe,0xe4,0xbc,0xae,0xac,0xcc,0xc2,0xc4,0xe4,0xe6,0xe4,0x44
,0xa6,0xcc,0x24,0xb6,0xec,0xb4,0xba,0xbc,0x64,0xc2,0xec,0x4c,0xaa,0xcc,0x9c,0xb2,0xbc,0xdc,0xea,0xf4,0x24,0xae,0xe4,0x84,0xae,0xbc,0x4c,0xba,0xe4,0xcc,0xc2,0xbc
,0xa4,0xce,0xe4,0xa4,0xaa,0xac,0xcc,0xe2,0xec,0x94,0xce,0xe4,0xd4,0xd2,0xd4,0x54,0xc2,0xec,0xe4,0xda,0xdc,0xbc,0xb2,0xb4,0xbc,0xd2,0xdc,0xa4,0xce,0xdc,0x64,0xa6
,0xc4,0xf4,0xf2,0xf4,0xdc,0xce,0xcc,0xe4,0xe6,0xec,0x24,0xb2,0xec,0x54,0xa6,0xc4,0x7c,0xa2,0xb4,0x14,0xb6,0xf4,0x34,0xae,0xdc,0x44,0xb2,0xdc,0x94,0xca,0xdc,0xbc
,0xb2,0xac,0x54,0xa6,0xcc,0x7c,0xae,0xc4,0x27,0x51,0x64,0x75,0x00,0x00,0x01,0x00,0x74,0x52,0x4e,0x53,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x00,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x31,0xcf,0x38,0x8e,0x00,0x00,0x04,0xd0,0x49,0x44,0x41,0x54
,0x78,0x9c,0x9d,0x96,0x7d,0x5c,0x14,0x45,0x18,0xc7,0xaf,0xa4,0xd8,0x4a,0xa3,0x17,0x7a,0xb1,0x36,0x81,0xc5,0xc4,0x2c,0xb5,0x26,0x7b,0xd1,0xb2,0x2c,0x8b,0x32,0x2c
,0x88,0xde,0xac,0x2e,0xe9,0x65,0x09,0x7a,0xb1,0x37,0xab,0xad,0x10,0x36,0x47,0x8b,0xcc,0x28,0xee,0x0a,0x33,0xba,0x5c,0xb4,0x82,0x36,0xd3,0xeb,0x94,0xe8,0x88,0x6a
,0xe1,0xb2,0x9c,0x52,0xd1,0x32,0xa6,0xc8,0xe3,0x2a,0xbd,0x22,0x92,0xc8,0x3a,0x35,0x07,0x2d,0x9b,0xbb,0xbd,0x3b,0x6e,0x77,0xef,0x16,0x3f,0x37,0x7f,0xdd,0xf3,0xcc
,0x7c,0xef,0xf7,0x9b,0x99,0x67,0x66,0xd6,0x02,0x4d,0xda,0xe4,0x09,0x66,0xbd,0x16,0xb3,0xce,0x0c,0x67,0xd2,0x68,0xe7,0x86,0x64,0x51,0xd1,0x7a,0x6d,0xb2,0xe8,0x18
,0xe4,0x96,0x93,0x44,0xf7,0x21,0x70,0x4a,0x92,0xe8,0x42,0x8c,0x6e,0x4e,0x0e,0x95,0x7f,0x95,0xf0,0x85,0x07,0x82,0x96,0xcd,0xd4,0x77,0xbd,0x6c,0x15,0xa4,0x65,0x75
,0xfa,0xec,0x84,0xe8,0xb8,0x28,0xda,0x96,0x39,0x49,0x37,0x68,0x3e,0x0f,0x88,0xf5,0x3d,0x5d,0xd2,0xd9,0x68,0x44,0xb9,0xa5,0xa8,0xca,0xa6,0x19,0x75,0x1a,0x02,0x02
,0x7f,0x83,0x26,0xb5,0xb6,0x10,0xcd,0x37,0x1a,0xe6,0x5a,0xf7,0xe6,0xe4,0x6f,0x8a,0x1d,0xf7,0x10,0x06,0x80,0x79,0x34,0x36,0x53,0xed,0xce,0x19,0xd2,0xa7,0x18,0x50
,0x28,0xae,0xd9,0x8d,0x51,0x5a,0x59,0x34,0x96,0xa7,0x48,0x00,0xe0,0x37,0x07,0xc0,0x8a,0x3f,0x18,0x32,0x7b,0x3c,0x67,0x54,0x85,0xca,0xce,0xd5,0x04,0x60,0x77,0xb4
,0x6c,0x57,0xfa,0x88,0x00,0xc8,0x94,0x68,0x51,0x64,0xf8,0xb0,0xc0,0x9f,0x27,0xc2,0x38,0x28,0x74,0x1c,0xf5,0x0e,0x01,0x08,0x35,0xbe,0xaf,0x86,0x7f,0x21,0x40,0x9b
,0xef,0x2b,0x35,0xca,0xcd,0x63,0x24,0x40,0x5a,0xec,0x4a,0x5c,0x14,0x16,0x6c,0xe5,0x05,0x20,0x60,0xf7,0xc4,0x50,0xf4,0x1d,0x15,0x01,0x84,0xdf,0x11,0x72,0x54,0x05
,0xe8,0xc4,0xc9,0xe8,0x1f,0xbd,0x30,0x3e,0xaa,0xd8,0xaf,0x21,0x54,0x48,0x62,0x32,0xdb,0x68,0x54,0xf4,0xb6,0x9f,0x90,0x61,0xdf,0x17,0xd0,0x9f,0x9b,0x1a,0xb0,0x40
,0x3b,0xd0,0x1b,0x7d,0x30,0x01,0x0a,0xbd,0x33,0xfa,0x09,0x0f,0xa8,0xb0,0xef,0x1b,0x1a,0x6c,0xa9,0xfc,0xf9,0xef,0x71,0x45,0x1c,0x2c,0x4b,0x43,0x52,0xd0,0x3b,0x69
,0x69,0x55,0x12,0xa2,0xb0,0xef,0x74,0x14,0xfc,0x7b,0x90,0x82,0xf3,0x2a,0x58,0x65,0xd5,0x96,0x4f,0x8f,0x09,0xb0,0x4e,0x37,0x13,0xca,0x11,0x97,0xc6,0xae,0x1e,0x55
,0x46,0x3d,0x18,0xb4,0x4c,0x1b,0x06,0x19,0x01,0x56,0xb1,0xb1,0xdb,0x1a,0x55,0x49,0x6a,0x77,0xbf,0x07,0x9a,0xa0,0x50,0x3e,0x75,0x56,0x98,0x4d,0xc1,0x0d,0xb9,0x2c
,0xeb,0xb4,0x62,0x35,0x04,0xa4,0x39,0x9d,0x33,0x45,0xa1,0xe7,0x97,0xb0,0x08,0xad,0x24,0x7e,0x43,0x21,0x13,0x89,0x88,0xeb,0x6c,0xfd,0xb1,0xd7,0xa3,0x5c,0x7a,0x0b
,0x89,0xb0,0x08,0x87,0x16,0x56,0x45,0xe7,0xe8,0xec,0xc6,0x39,0xaf,0xf2,0xb3,0xd3,0xa3,0xec,0x40,0x23,0xcd,0x97,0x70,0x83,0xa2,0xb0,0xf8,0x62,0x23,0x2a,0xf0,0x6b
,0x44,0xc3,0x40,0x2d,0x6a,0xab,0x98,0x04,0xb9,0xee,0x66,0x03,0x4b,0x2e,0x2b,0x86,0xf0,0x81,0xb6,0x44,0xe8,0xa1,0xce,0xaa,0x4c,0x37,0x0f,0x7e,0x67,0xc5,0x27,0x5d
,0x1a,0x96,0x1e,0x82,0x5b,0x9a,0x1c,0xb0,0x9a,0x01,0xf9,0x85,0x19,0xc7,0x6d,0xd3,0xa2,0x8e,0x77,0x33,0x1a,0xf3,0x7d,0x88,0xc1,0x08,0xe0,0x06,0x65,0x66,0xf1,0x1c
,0x49,0xa3,0x29,0xf0,0x5b,0x45,0x36,0xdb,0x2a,0x05,0xd7,0x0d,0xf9,0xf2,0xd2,0xaa,0x73,0x43,0x55,0x65,0x99,0xfc,0xf0,0xd3,0xcf,0x7c,0x8c,0x18,0x06,0xa5,0x84,0x6b
,0xe1,0x0a,0xd6,0xd1,0xd4,0x1c,0xac,0xc7,0x01,0xbb,0xab,0xed,0xb6,0xc0,0x39,0xe1,0x0d,0x46,0x88,0x41,0xe0,0xf2,0xd7,0xee,0x7b,0xaa,0xcc,0x52,0xbf,0x74,0x6c,0xff
,0x45,0x88,0x7c,0x24,0x08,0x20,0x34,0x1c,0x9f,0xc0,0x06,0x7a,0xc7,0x6a,0x1c,0x4b,0x43,0xea,0xd8,0xba,0xcf,0x54,0x27,0x82,0x40,0x08,0x41,0xfe,0xfe,0xf3,0xf7,0xdd
,0x61,0xe1,0x44,0x7b,0xc7,0xd4,0x3d,0x59,0x5d,0xc7,0xf2,0x12,0x4d,0xd2,0x69,0x2d,0x52,0xd8,0xed,0x38,0x96,0xa4,0x93,0x9d,0xc6,0x72,0xcf,0xf9,0x49,0x88,0xe2,0x37
,0xde,0xbd,0xe4,0x82,0x9e,0x19,0x3b,0xeb,0xe8,0x5c,0x15,0x4e,0x2e,0x28,0xaa,0xe9,0xe8,0xf9,0xb6,0xe4,0xf9,0xb3,0xfc,0x28,0x32,0x2d,0x0d,0x19,0x5a,0x80,0xfd,0x12
,0x3f,0xab,0x2b,0x6b,0x4f,0xe5,0xfa,0xf6,0xf4,0x54,0xd1,0xab,0x44,0x57,0x58,0x71,0x88,0xbd,0xa3,0xda,0xc7,0x1d,0xff,0xd6,0x89,0x45,0xb6,0xc0,0x70,0xad,0xa8,0xba
,0x00,0xdc,0xf8,0x17,0x46,0x56,0xfe,0x59,0x63,0xf7,0xc8,0x9c,0x62,0xdc,0x57,0xc5,0x2b,0x7a,0xfa,0x14,0xf6,0x37,0x24,0xe8,0x51,0xc9,0x57,0x0f,0xbd,0x1e,0x8f,0xe8
,0x88,0x3d,0xb0,0xc6,0x6a,0x92,0xad,0x48,0x4f,0x52,0xd9,0x4e,0xc3,0xb8,0x38,0xe8,0xf2,0xa8,0x5d,0xba,0x2c,0x20,0xb2,0x49,0xf8,0xd2,0xc1,0xd1,0x2f,0xa2,0x9a,0x04
,0x59,0xba,0x48,0x64,0x97,0x90,0x35,0x7b,0x30,0xf4,0x4c,0xb7,0x14,0x91,0xdc,0x58,0xfb,0x43,0x79,0x89,0x3f,0xc2,0xe2,0x9f,0x06,0x43,0xe7,0x85,0xed,0x12,0x3e,0x6b
,0x7d,0x91,0x2c,0x76,0x57,0x3e,0x8e,0x54,0x58,0x40,0x07,0x99,0xa3,0x0b,0x78,0x41,0x95,0x5c,0xf7,0x48,0x93,0x18,0x60,0xe9,0xd5,0xf6,0x6f,0x6d,0xf8,0xca,0x31,0x7c
,0x1d,0x68,0x51,0x6e,0x28,0xb5,0x4b,0x2f,0xee,0xdd,0x9b,0xaf,0x2b,0x76,0xb0,0x65,0x69,0xf4,0x6a,0x93,0xd3,0x7b,0xfe,0x51,0x85,0xf1,0x72,0x33,0x74,0x71,0xd0,0x2e
,0x91,0xce,0x5d,0x51,0x43,0x15,0x9c,0x6e,0x1c,0xbc,0xda,0x94,0x82,0x8e,0x83,0xfb,0x09,0x7d,0x09,0x00,0x5a,0x90,0x18,0x3d,0x82,0x16,0x1d,0x20,0xfe,0xc3,0x3a,0x3c
,0x1c,0x84,0x13,0xe9,0x09,0x01,0xd8,0x97,0x4b,0x2f,0xf3,0xd6,0xf2,0xdb,0x78,0x7a,0x96,0xa4,0x57,0x77,0x25,0x42,0xb9,0x33,0x98,0xa0,0xe4,0xd4,0xf4,0xd0,0xa4,0x8e
,0x0e,0x16,0x95,0xe0,0x5b,0x49,0x7f,0x2a,0x62,0xfb,0xc8,0x61,0xf4,0xdd,0xc3,0xf3,0x12,0xa1,0xb7,0x33,0x02,0x99,0x5e,0xd2,0xe1,0x51,0xab,0xed,0x43,0x3e,0xf8,0x48
,0xce,0x5e,0x15,0x0a,0x76,0xd9,0xcb,0x37,0xf3,0xb4,0x40,0xa6,0xc5,0x47,0xeb,0x7d,0x84,0xff,0xef,0xc8,0xd6,0xc8,0xeb,0xd0,0xfb,0x3a,0x5d,0x9c,0xd2,0x11,0xf7,0x87
,0x43,0xb1,0x69,0xc5,0x3a,0x52,0x3a,0x94,0x8b,0x8b,0x76,0x96,0xf6,0xd7,0xb6,0x8b,0xd1,0x02,0x17,0x47,0x94,0xd2,0xba,0xbf,0x71,0x60,0x3a,0xa9,0x8f,0x2d,0x71,0xe5
,0x2c,0x8e,0x87,0x6e,0x47,0x27,0x95,0xb7,0xc6,0x3c,0x48,0xdc,0x5c,0x89,0xde,0x4a,0x57,0xc6,0x38,0x94,0x6b,0x2a,0xef,0x4c,0xb9,0xc9,0x88,0x5e,0xbf,0xec,0xae,0x6e
,0x51,0xf3,0x08,0x3e,0x81,0x04,0x32,0xfa,0xea,0xd8,0x8c,0xa3,0xb7,0x7d,0xee,0x70,0x9b,0x01,0xcd,0xbe,0xca,0xe3,0x80,0x9a,0x76,0xab,0x4b,0x20,0x5f,0x7a,0xb4,0x39
,0xaf,0x67,0xcc,0x5a,0xa3,0x61,0x0e,0xea,0x5a,0xea,0x5e,0x82,0x5f,0xd2,0x7f,0xad,0x29,0x03,0xc6,0x4c,0xbe,0x11,0xc5,0xaf,0x4b,0xd1,0x07,0x89,0xbb,0xcd,0x50,0xee
,0x10,0x89,0xff,0x3c,0x39,0x54,0x79,0x05,0x9d,0xdc,0x9b,0x1c,0x0a,0x17,0xb9,0xee,0x31,0xbe,0x6f,0x07,0x86,0xf6,0x1d,0xbe,0xd0,0xa4,0xd7,0x14,0xe5,0x3e,0x79,0x31
,0x59,0x14,0xee,0xb8,0x37,0x69,0x94,0x33,0xeb,0x84,0xff,0x03,0xc2,0x2c,0x8a,0xf3,0xf6,0x29,0xe0,0x31,0x00,0x00,0x00,0x00,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};

const HttpResponseStatic spark(IMAGE_SPARK, sizeof(IMAGE_SPARK), "image/png");

void flashGreen(const unsigned aDelay = 100) {
    RGB.control(true);
    
    RGB.color(0, 255, 0);
    delay(aDelay);
    RGB.color(0,0,0);

    RGB.control(false);
}

void flashRed(const unsigned aDelay = 100) {
    RGB.control(true);
    
    RGB.color(255, 0, 0);
    delay(aDelay);
    RGB.color(0,0,0);

    RGB.control(false);
}



 

/**
 * Class WebServer impléments TCPServer and provide all methods for a http server.
 * Need to be started using @see begin().
 * Can be stopped using @see end().
 */
class WebServer : public TCPServer {
private:

protected:

public:
/**
 * Default constructor.    
 * Using default port TCP/80.
 */
    WebServer() : TCPServer(80) {}    
/**
 * Constructor giving a TCP port.
 * @param aPort Port on which the server listen in 0-65535 range.
 */
    WebServer(const unsigned aPort) : TCPServer(aPort) {}    
    
/**
 * Must be called in main loop() function.
 */
    void loop() {
        if (TCPClient client = available()) {
            
            HttpRequest hr;
            while (int nb = client.available()) {
                Serial.println(nb);
                for (int i = nb; i > 0; --i) {
                    const char buf = client.read();
                    Serial.print(buf);
                    hr.parse(buf);    
                }
                Serial.println();
            }
            Serial.print("URL : "); Serial.println(hr.URL());
#ifdef USE_HEADERS
            hr.printHeaders();
#endif
            struct slre_cap caps[4];

            if (slre_match("^/(|index.htm)$", hr.URL(), strlen(hr.URL()), NULL, 0) >= 0) {
                client << welcome;

            } else if (slre_match("^/spark.png$", hr.URL(), strlen(hr.URL()), NULL, 0) >= 0) {
                client << spark;

            } else if ((slre_match("^/led/(on|off)$", hr.URL(), strlen(hr.URL()), caps, 1) >= 0)) { 
                pinMode(D7, OUTPUT);
                if (!strcmp(caps[0].ptr, "on")) {
                    digitalWrite(D7, HIGH);
                    client << err204.status(204);
                } else if (!strcmp(caps[0].ptr, "off")) {
                    digitalWrite(D7, LOW);
                    client << err204.status(204);
                } else {
                    const char lib[] = "<html>Parameter MUST be 'on' ou 'off'.</html>";
                    HttpResponseStatic resp(lib, strlen(lib));
                    client << resp.status(400);
                }

            } else {
                char lib[1024];
                lib[0] = '\0';
                
                strcat(lib, "<html><h1>Not Found</h1>");
                strcat(lib, "URL: ");
                strcat(lib, hr.URL());
                strcat(lib, "</html>");
                
                HttpResponseStatic resp(lib, strlen(lib));
                client << resp.status(404);
            }
            client.flush();
            delay(100);
            client.stop();
        }   
    };

};


 
 
WebServer ws;

void setup() {
    Serial.begin(9600);
    delay(1000);
    Serial.println(Network.localIP());
    Serial.println(Network.subnetMask());
    Serial.println(Network.gatewayIP());
    Serial.println(Network.SSID());

// Start a WEB Server
    ws.begin();
    flashGreen();
}

void loop() {
    ws.loop();
}