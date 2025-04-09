# order_abandoned_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**customer** | [**base_customer_t**](base_customer.md) \* |  | [optional] 
**basket_id** | **char \*** |  | [optional] 
**basket_url** | **char \*** |  | [optional] 
**created_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**modified_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**currency** | [**currency_t**](currency.md) \* |  | [optional] 
**totals** | [**order_totals_t**](order_totals.md) \* |  | [optional] 
**order_products** | [**list_t**](order_item.md) \* |  | [optional] 
**additional_fields** | [**object_t**](.md) \* |  | [optional] 
**custom_fields** | [**object_t**](.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


