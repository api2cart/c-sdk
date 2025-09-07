# order_calculate_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**customer_email** | **char \*** | Defines the customer specified by email for whom the order needs to be calculated | 
**currency_id** | **char \*** | Currency Id | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**coupons** | **list_t \*** | Coupons that will be applied to order. If the order isn&#39;t eligible for any given discount code or there is no discount with such a code it will be skipped during calculation | [optional] 
**shipp_first_name** | **char \*** | Specifies shipping first name | 
**shipp_last_name** | **char \*** | Specifies shipping last name | 
**shipp_address_1** | **char \*** | Specifies first shipping address | 
**shipp_address_2** | **char \*** | Specifies second address line of a shipping street address | [optional] 
**shipp_city** | **char \*** | Specifies shipping city | 
**shipp_postcode** | **char \*** | Specifies shipping postcode | 
**shipp_state** | **char \*** | Specifies shipping state code | [optional] 
**shipp_country** | **char \*** | Specifies shipping country code | 
**shipp_company** | **char \*** | Specifies shipping company | [optional] 
**shipp_phone** | **char \*** | Specifies shipping phone | [optional] 
**bill_first_name** | **char \*** | Specifies billing first name | [optional] 
**bill_last_name** | **char \*** | Specifies billing last name | [optional] 
**bill_address_1** | **char \*** | Specifies first billing address | [optional] 
**bill_address_2** | **char \*** | Specifies second billing address | [optional] 
**bill_city** | **char \*** | Specifies billing city | [optional] 
**bill_postcode** | **char \*** | Specifies billing postcode | [optional] 
**bill_state** | **char \*** | Specifies billing state code | [optional] 
**bill_country** | **char \*** | Specifies billing country code | [optional] 
**bill_company** | **char \*** | Specifies billing company | [optional] 
**bill_phone** | **char \*** | Specifies billing phone | [optional] 
**response_fields** | **char \*** | Set this parameter in order to choose which entity fields you want to retrieve | [optional] 
**order_item** | [**list_t**](order_calculate_order_item_inner.md) \* |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


