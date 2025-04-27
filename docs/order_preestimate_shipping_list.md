# order_preestimate_shipping_list_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**warehouse_id** | **char \*** | This parameter is used for selecting a warehouse where you need to set/modify a product quantity. | [optional] 
**customer_id** | **char \*** | Retrieves orders specified by customer id | [optional] 
**customer_email** | **char \*** | Retrieves orders specified by customer email | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**shipp_address_1** | **char \*** | Specifies first shipping address | [optional] 
**shipp_city** | **char \*** | Specifies shipping city | [optional] 
**shipp_postcode** | **char \*** | Specifies shipping postcode | [optional] 
**shipp_state** | **char \*** | Specifies shipping state code | [optional] 
**shipp_country** | **char \*** | Specifies shipping country code | 
**params** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] [default to 'force_all']
**exclude** | **char \*** | Set this parameter in order to choose which entity fields you want to ignore. Works only if parameter &#x60;params&#x60; equal force_all | [optional] 
**order_item** | [**list_t**](order_preestimate_shipping_list_order_item_inner.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


