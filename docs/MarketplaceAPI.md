# MarketplaceAPI

All URIs are relative to *https://api.api2cart.com/v1.1*

Method | HTTP request | Description
------------- | ------------- | -------------
[**MarketplaceAPI_marketplaceProductFind**](MarketplaceAPI.md#MarketplaceAPI_marketplaceProductFind) | **GET** /marketplace.product.find.json | marketplace.product.find


# **MarketplaceAPI_marketplaceProductFind**
```c
// marketplace.product.find
//
// Search product in global catalog.
//
model_response_marketplace_product_find_t* MarketplaceAPI_marketplaceProductFind(apiClient_t *apiClient, int *count, char *page_cursor, char *keyword, char *categories_ids, char *store_id, char *asin, char *ean, char *gtin, char *upc, char *mpn, char *isbn, char *response_fields, char *params, char *exclude);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**count** | **int \*** | This parameter sets the entity amount that has to be retrieved. Max allowed count&#x3D;250 | [optional] [default to 10]
**page_cursor** | **char \*** | Used to retrieve entities via cursor-based pagination (it can&#39;t be used with any other filtering parameter) | [optional] 
**keyword** | **char \*** | Defines search keyword | [optional] 
**categories_ids** | **char \*** | Defines product add that is specified by comma-separated categories id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**asin** | **char \*** | Amazon Standard Identification Number. | [optional] 
**ean** | **char \*** | European Article Number. An EAN is a unique 8 or 13-digit identifier that many industries (such as book publishers) use to identify products. | [optional] 
**gtin** | **char \*** | Global Trade Item Number. An GTIN is an identifier for trade items. | [optional] 
**upc** | **char \*** | Universal Product Code. A UPC (UPC-A) is a commonly used identifer for many different products. | [optional] 
**mpn** | **char \*** | Manufacturer Part Number. A MPN is an identifier of a particular part design or material used. | [optional] 
**isbn** | **char \*** | International Standard Book Number. An ISBN is a unique identifier for books. | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to &#39;force_all&#39;]
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 

### Return type

[model_response_marketplace_product_find_t](model_response_marketplace_product_find.md) *


### Authorization

[StoreKeyAuth](../README.md#StoreKeyAuth), [ApiKeyAuth](../README.md#ApiKeyAuth)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

