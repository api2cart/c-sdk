# product_option_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**name** | **char \*** | Defines option&#39;s name | 
**type** | **api2cart_openapi_product_option_add_TYPE_e** | Defines option&#39;s type that has to be added | 
**product_id** | **char \*** | Defines product id where the option should be added | [optional] 
**default_option_value** | **char \*** | Defines default option value that has to be added | [optional] 
**option_values** | **char \*** | Defines option values that has to be added | [optional] 
**description** | **char \*** | Defines option&#39;s description | [optional] 
**avail** | **int** | Defines whether the option is available | [optional] [default to true]
**sort_order** | **int** | Sort number in the list | [optional] [default to 0]
**required** | **int** | Defines if the option is required | [optional] [default to false]
**values** | [**list_t**](product_option_add_values_inner.md) \* | An array of option values.&lt;/b&gt; | [optional] 
**clear_cache** | **int** | Is cache clear required | [optional] [default to true]

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


