# product_variant_image_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**product_id** | **char \*** | Defines product id where the variant image has to be added | [optional] 
**product_variant_id** | **char \*** | Defines product&#39;s variants specified by variant id | 
**store_id** | **char \*** | Store Id | [optional] 
**image_name** | **char \*** | Defines image&#39;s name | 
**type** | **api2cart_openapi_product_variant_image_add_TYPE_e** | Defines image&#39;s types that are specified by comma-separated list | [default to 'base']
**url** | **char \*** | Defines URL of the image that has to be added | [optional] 
**content** | **char \*** | Content(body) encoded in base64 of image file | [optional] 
**label** | **char \*** | Defines alternative text that has to be attached to the picture | [optional] 
**mime** | **char \*** | Mime type of image http://en.wikipedia.org/wiki/Internet_media_type. | [optional] 
**position** | **int** | Defines image’s position in the list | [optional] [default to 0]
**option_id** | **char \*** | Defines option id of the product variant for which the image will be added | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


