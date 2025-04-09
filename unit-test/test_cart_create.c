#ifndef cart_create_TEST
#define cart_create_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cart_create_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cart_create.h"
cart_create_t* instantiate_cart_create(int include_optional);



cart_create_t* instantiate_cart_create(int include_optional) {
  cart_create_t* cart_create = NULL;
  if (include_optional) {
    cart_create = cart_create_create(
      api2cart_openapi_cart_create_CARTID_"Opencart14",
      "http://mystore.com",
      "https://your-store.com/custom/bridge/path/bridge.php",
      "/home/www/stores/magento1922",
      "ab37fc230bc5df63a5be1b11220949be",
      "gmz3iz45x2",
      true,
      false,
      "oc_",
      "Mozilla/5.0 (Windows NT 6.1; Win64; x64; rv:47.0) Gecko/20100101 Firefox/47.0",
      "ftp.mystore.com",
      "user",
      "G4}q215D4_H9$Be",
      22,
      "/public",
      "82cc921c6a5c67082cc921c6a5c6707e1d6e6862ba3201a",
      "admin",
      "http://mystore.bigcommerce.com/api/v1",
      "6b89704cd75738cb0f9f6468d5462aba",
      "p1r37bt131z86675nofv9xmhietoe4t",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "stores/etplnf8o8v",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "bbca57d8ff3c3677128112c15556d9e3",
      "860f3a6fc87632301a42cd88e4b5ab3d",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "bbca57d8ff3c3677128112c15556d9e3",
      "mylogin",
      "7943CA5F3990E00D9A4CCF0BD998211F",
      "admin",
      "admin",
      "f6471ef78f72b41849a8b8b67791b0b5",
      "2xo0m9ib5ty7rv84num9uic3e9mio0cy73nsdey7e5270",
      "82cc921c6a5c67082cc921c6a5c6707e1d6e6862ba3201a",
      "a9psel85v1wy5faeyjw03y0r",
      "gmz3iz45x2",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "w0fi0igk2w29bjcd7ydr2s35",
      "223577551.L07_RE-y7unmKf2dox4djsHkVxwpUfs1ikG_uQmHhF-aASEReNn_Qns1Wqn3dDa0ZMxrt9CIael3dgudeDZb31ZUdS",
      "a9psel85v1wy5faeyjw03y0r",
      "gmz3iz45x2",
      "gmz3iz45x2",
      "v^1.1#i ... AjRV4yNjA=",
      "v^1.1#i ... rAewqVasdA=",
      "production",
      101,
      "b849eb85-v8b9-1dw8-9fe2-97e1d6ffc7b0",
      "testpassword",
      "admin",
      "12345",
      "1",
      "A9PSDFGFGHFOQD",
      "production",
      "api_client_1",
      "secret_phrase_1",
      "admin",
      "nimda",
      list_createList(),
      "423f6A24-123z-8654-989u-6fa96478289",
      "1gf85fea-8974-2648-w12w-rt54284tdf54",
      "production",
      "0f3e4dd4-0514-4346-b39d-af0e00ea066d",
      "us",
      "cf5444729c2abd6b6a5d983691767cb5",
      "2620ee52a8bc942f9d5d3a575f4d363e",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "gmz3iz45x2",
      "SWSCS3O1RJBSRNBYQLFIYJN2ZQ",
      "SWSCS3O1RJBSRNBYQLFIYJN2ZQ",
      "V3NYNWg2b1dZdHBUWDN1cmdKdGhnenp5enVJYlJ0WlJvOFF2bnQ",
      "sJrD-LM0eddhe63rfgfva0dDydXfre4",
      "4Grr_ZCLNNoSUuhAjesKuchxo9SL",
      "7dba81f90bdbe25e7000e73214ca51b",
      "4Grr_ZCLNNoSUuhAjesKuchxo9SL",
      "ck_26d8e2ad604f3917e429df6961722282bdcf109d",
      "cs_931ced666118a15c5f7b4a33a15gf5589cbeba55",
      "ktv4n9rgrj0evjuy2t6p2xlb1f8u5pmy",
      "a46abc3kxyinlbggy06i9g975xqo6gjq",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "CKJ1ZEWRJWRLTPVBQJ9FGGRORD4AGS96",
      "6b0b5b7b-7d87-45b5-bf34-ac6b438e63da",
      "316c0a09-f195-42be-74f6-a02cebb9cae6",
      "58b893a4-6b16-5c2f-qt78-qa3r61t32rt8",
      "
        OAUTH2.eyJraWQiOiJkZ0x3cjNRMCIsImFsZyI6IkhTMjU2In0.
        eyJkYXRhIjoie1wiaWRcIjpcImJlZjM3MmRmLTUyNGItNDI3NS05M2RkL
        Tg4NDBlOTU3ZWU2OFwifSIsImlhdCI6MTY0ODA0NTEyNiwiZXhwIjoxNzExMTE3MTI2fQ.
        VRR2lGSbcTVmaArtmyyhy6o4WRDwTn-nlDCQpZ97eYw
      ",
      "211188015100135",
      "e2qoG2zklLlfP7cEngEJ94YjhkejkjAm",
      "TG-63h13529vb5464110188d2x9-703754376",
      1234,
      "nl5l1lE0vxgv6cV111fHsdlOOIfb0Ms5IR7l4Igs",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "19414773883a13a850b6a52350b7246499a24",
      "nl5l1lE0vxgv6cV111fHsdlOOIfb0Ms5IR7l4Igs",
      "2915e189ce3d23d23d2327d204ae6a0bd",
      "DNHtqdL2WPIefeUhQWYgtXPS23fgbfgasdsGHHJGhg3RTFDQWFGZmVoFRT5IfkQj1E7eR5",
      "eyJhbGciOiJSUzI1NiIsInR5cCI6IsfddfdfdeyJ1c2VyX25hbWUiOiI5NDUxMzE1MSIsInNjb3BlIjpbImFsbGVncm86YXBpOm9yZGVyczpyZWFkIiwiYWxsZWdybzphcGk6cHJvZmlsZTp3cml0ZSIsImFsbGVncm86YXBpOnNhbGU6b2ZmZXJzOndyaXRlIiwiYWxsZWdybzphcGk6YmlsbGluZzpyZWFkIiwiYWxsZWdybzphcGk6Y2FtcGFpZ25zIiwiYWxsZWdybzphcGk6ZGlzcHV0ZXMiLCJhbGxlZ3JvOmFwaTpzYWxlOm9mZmVyczpyZWFkIiwiYWxsZWdybzphcGk6YmlkcyIsImFsbGVncm86YXBpOm9yZGVyczp3cml0ZSIsImFsbGVncm86YXBpOnBheW1lbnRzOndyaXRlIiwiYWxsZWdybzphcGk6c2FsZTpzZXR0aW5nczp3cml0ZSIsImFsbGVncm86YXBpOnByb2ZpbGU6cmVhZCIsImFsbGVncm86YXBpOnJhdGluZ3MiLCJhbGxlZ3JvOmFwaTpzYWxlOnNldHRpbmdzOnJlYWQiLCJhbGxlZ3JvOmFwaTpwYXltZW50czpyZWFkIiwiYWxsZWdybzphcGk6bWVzc2FnaW5nIl0sI",
      "eyJhbGciOiJSUzI1NiIsInR5cCI6IsfddfdfdeyJ1c2VyX25hbWUiOiI5NDUxMzE1MSIsInNjb3BlIjpbImFsbGVncm86YXBpOm9yZGVyczpyZWFkIiwiYWxsZWdybzphcGk6cHJvZmlsZTp3cml0ZSIsImFsbGVncm86YXBpOnNhbGU6b2ZmZXJzOndyaXRlIiwiYWxsZWdybzphcGk6YmlsbGluZzpyZWFkIiwiYWxsZWdybzphcGk6Y2FtcGFpZ25zIiwiYWxsZWdybzphcGk6ZGlzcHV0ZXMiLCJhbGxlZ3JvOmFwaTpzYWxlOm9mZmVyczpyZWFkIiwiYWxsZWdybzphcGk6YmlkcyIsImFsbGVncm86YXBpOm9yZGVyczp3cml0ZSIsImFsbGVncm86YXBpOnBheW1lbnRzOndyaXRlIiwiYWxsZWdybzphcGk6c2FsZTpzZXR0aW5nczp3cml0ZSIsImFsbGVncm86YXBpOnByb2ZpbGU6cmVhZCIsImFsbGVncm86YXBpOnJhdGluZ3MiLCJhbGxlZ3JvOmFwaTpzYWxlOnNldHRpbmdzOnJlYWQiLCJhbGxlZ3JvOmFwaTpwYXltZW50czpyZWFkIiwiYWxsZWdybzphcGk6bWVzc2FnaW5nIl0sI",
      "production"
    );
  } else {
    cart_create = cart_create_create(
      api2cart_openapi_cart_create_CARTID_"Opencart14",
      "http://mystore.com",
      "https://your-store.com/custom/bridge/path/bridge.php",
      "/home/www/stores/magento1922",
      "ab37fc230bc5df63a5be1b11220949be",
      "gmz3iz45x2",
      true,
      false,
      "oc_",
      "Mozilla/5.0 (Windows NT 6.1; Win64; x64; rv:47.0) Gecko/20100101 Firefox/47.0",
      "ftp.mystore.com",
      "user",
      "G4}q215D4_H9$Be",
      22,
      "/public",
      "82cc921c6a5c67082cc921c6a5c6707e1d6e6862ba3201a",
      "admin",
      "http://mystore.bigcommerce.com/api/v1",
      "6b89704cd75738cb0f9f6468d5462aba",
      "p1r37bt131z86675nofv9xmhietoe4t",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "stores/etplnf8o8v",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "bbca57d8ff3c3677128112c15556d9e3",
      "860f3a6fc87632301a42cd88e4b5ab3d",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "bbca57d8ff3c3677128112c15556d9e3",
      "mylogin",
      "7943CA5F3990E00D9A4CCF0BD998211F",
      "admin",
      "admin",
      "f6471ef78f72b41849a8b8b67791b0b5",
      "2xo0m9ib5ty7rv84num9uic3e9mio0cy73nsdey7e5270",
      "82cc921c6a5c67082cc921c6a5c6707e1d6e6862ba3201a",
      "a9psel85v1wy5faeyjw03y0r",
      "gmz3iz45x2",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "w0fi0igk2w29bjcd7ydr2s35",
      "223577551.L07_RE-y7unmKf2dox4djsHkVxwpUfs1ikG_uQmHhF-aASEReNn_Qns1Wqn3dDa0ZMxrt9CIael3dgudeDZb31ZUdS",
      "a9psel85v1wy5faeyjw03y0r",
      "gmz3iz45x2",
      "gmz3iz45x2",
      "v^1.1#i ... AjRV4yNjA=",
      "v^1.1#i ... rAewqVasdA=",
      "production",
      101,
      "b849eb85-v8b9-1dw8-9fe2-97e1d6ffc7b0",
      "testpassword",
      "admin",
      "12345",
      "1",
      "A9PSDFGFGHFOQD",
      "production",
      "api_client_1",
      "secret_phrase_1",
      "admin",
      "nimda",
      list_createList(),
      "423f6A24-123z-8654-989u-6fa96478289",
      "1gf85fea-8974-2648-w12w-rt54284tdf54",
      "production",
      "0f3e4dd4-0514-4346-b39d-af0e00ea066d",
      "us",
      "cf5444729c2abd6b6a5d983691767cb5",
      "2620ee52a8bc942f9d5d3a575f4d363e",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "gmz3iz45x2",
      "SWSCS3O1RJBSRNBYQLFIYJN2ZQ",
      "SWSCS3O1RJBSRNBYQLFIYJN2ZQ",
      "V3NYNWg2b1dZdHBUWDN1cmdKdGhnenp5enVJYlJ0WlJvOFF2bnQ",
      "sJrD-LM0eddhe63rfgfva0dDydXfre4",
      "4Grr_ZCLNNoSUuhAjesKuchxo9SL",
      "7dba81f90bdbe25e7000e73214ca51b",
      "4Grr_ZCLNNoSUuhAjesKuchxo9SL",
      "ck_26d8e2ad604f3917e429df6961722282bdcf109d",
      "cs_931ced666118a15c5f7b4a33a15gf5589cbeba55",
      "ktv4n9rgrj0evjuy2t6p2xlb1f8u5pmy",
      "a46abc3kxyinlbggy06i9g975xqo6gjq",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "igse8e4rdmzkxdi937qe69d59en1imw",
      "CKJ1ZEWRJWRLTPVBQJ9FGGRORD4AGS96",
      "6b0b5b7b-7d87-45b5-bf34-ac6b438e63da",
      "316c0a09-f195-42be-74f6-a02cebb9cae6",
      "58b893a4-6b16-5c2f-qt78-qa3r61t32rt8",
      "
        OAUTH2.eyJraWQiOiJkZ0x3cjNRMCIsImFsZyI6IkhTMjU2In0.
        eyJkYXRhIjoie1wiaWRcIjpcImJlZjM3MmRmLTUyNGItNDI3NS05M2RkL
        Tg4NDBlOTU3ZWU2OFwifSIsImlhdCI6MTY0ODA0NTEyNiwiZXhwIjoxNzExMTE3MTI2fQ.
        VRR2lGSbcTVmaArtmyyhy6o4WRDwTn-nlDCQpZ97eYw
      ",
      "211188015100135",
      "e2qoG2zklLlfP7cEngEJ94YjhkejkjAm",
      "TG-63h13529vb5464110188d2x9-703754376",
      1234,
      "nl5l1lE0vxgv6cV111fHsdlOOIfb0Ms5IR7l4Igs",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "def50eyfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe657e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65d7e64a0cfe9fe65de64a0c865d",
      "19414773883a13a850b6a52350b7246499a24",
      "nl5l1lE0vxgv6cV111fHsdlOOIfb0Ms5IR7l4Igs",
      "2915e189ce3d23d23d2327d204ae6a0bd",
      "DNHtqdL2WPIefeUhQWYgtXPS23fgbfgasdsGHHJGhg3RTFDQWFGZmVoFRT5IfkQj1E7eR5",
      "eyJhbGciOiJSUzI1NiIsInR5cCI6IsfddfdfdeyJ1c2VyX25hbWUiOiI5NDUxMzE1MSIsInNjb3BlIjpbImFsbGVncm86YXBpOm9yZGVyczpyZWFkIiwiYWxsZWdybzphcGk6cHJvZmlsZTp3cml0ZSIsImFsbGVncm86YXBpOnNhbGU6b2ZmZXJzOndyaXRlIiwiYWxsZWdybzphcGk6YmlsbGluZzpyZWFkIiwiYWxsZWdybzphcGk6Y2FtcGFpZ25zIiwiYWxsZWdybzphcGk6ZGlzcHV0ZXMiLCJhbGxlZ3JvOmFwaTpzYWxlOm9mZmVyczpyZWFkIiwiYWxsZWdybzphcGk6YmlkcyIsImFsbGVncm86YXBpOm9yZGVyczp3cml0ZSIsImFsbGVncm86YXBpOnBheW1lbnRzOndyaXRlIiwiYWxsZWdybzphcGk6c2FsZTpzZXR0aW5nczp3cml0ZSIsImFsbGVncm86YXBpOnByb2ZpbGU6cmVhZCIsImFsbGVncm86YXBpOnJhdGluZ3MiLCJhbGxlZ3JvOmFwaTpzYWxlOnNldHRpbmdzOnJlYWQiLCJhbGxlZ3JvOmFwaTpwYXltZW50czpyZWFkIiwiYWxsZWdybzphcGk6bWVzc2FnaW5nIl0sI",
      "eyJhbGciOiJSUzI1NiIsInR5cCI6IsfddfdfdeyJ1c2VyX25hbWUiOiI5NDUxMzE1MSIsInNjb3BlIjpbImFsbGVncm86YXBpOm9yZGVyczpyZWFkIiwiYWxsZWdybzphcGk6cHJvZmlsZTp3cml0ZSIsImFsbGVncm86YXBpOnNhbGU6b2ZmZXJzOndyaXRlIiwiYWxsZWdybzphcGk6YmlsbGluZzpyZWFkIiwiYWxsZWdybzphcGk6Y2FtcGFpZ25zIiwiYWxsZWdybzphcGk6ZGlzcHV0ZXMiLCJhbGxlZ3JvOmFwaTpzYWxlOm9mZmVyczpyZWFkIiwiYWxsZWdybzphcGk6YmlkcyIsImFsbGVncm86YXBpOm9yZGVyczp3cml0ZSIsImFsbGVncm86YXBpOnBheW1lbnRzOndyaXRlIiwiYWxsZWdybzphcGk6c2FsZTpzZXR0aW5nczp3cml0ZSIsImFsbGVncm86YXBpOnByb2ZpbGU6cmVhZCIsImFsbGVncm86YXBpOnJhdGluZ3MiLCJhbGxlZ3JvOmFwaTpzYWxlOnNldHRpbmdzOnJlYWQiLCJhbGxlZ3JvOmFwaTpwYXltZW50czpyZWFkIiwiYWxsZWdybzphcGk6bWVzc2FnaW5nIl0sI",
      "production"
    );
  }

  return cart_create;
}


#ifdef cart_create_MAIN

void test_cart_create(int include_optional) {
    cart_create_t* cart_create_1 = instantiate_cart_create(include_optional);

	cJSON* jsoncart_create_1 = cart_create_convertToJSON(cart_create_1);
	printf("cart_create :\n%s\n", cJSON_Print(jsoncart_create_1));
	cart_create_t* cart_create_2 = cart_create_parseFromJSON(jsoncart_create_1);
	cJSON* jsoncart_create_2 = cart_create_convertToJSON(cart_create_2);
	printf("repeating cart_create:\n%s\n", cJSON_Print(jsoncart_create_2));
}

int main() {
  test_cart_create(1);
  test_cart_create(0);

  printf("Hello world \n");
  return 0;
}

#endif // cart_create_MAIN
#endif // cart_create_TEST
