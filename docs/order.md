# order_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**order_id** | **char \*** |  | [optional] 
**basket_id** | **char \*** |  | [optional] 
**channel_id** | **char \*** |  | [optional] 
**customer** | [**base_customer_t**](base_customer.md) \* |  | [optional] 
**create_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**currency** | [**currency_t**](currency.md) \* |  | [optional] 
**shipping_address** | [**customer_address_t**](customer_address.md) \* |  | [optional] 
**billing_address** | [**customer_address_t**](customer_address.md) \* |  | [optional] 
**payment_method** | [**order_payment_method_t**](order_payment_method.md) \* |  | [optional] 
**shipping_method** | [**order_shipping_method_t**](order_shipping_method.md) \* |  | [optional] 
**shipping_methods** | [**list_t**](order_shipping_method.md) \* |  | [optional] 
**status** | [**order_status_t**](order_status.md) \* |  | [optional] 
**totals** | [**order_totals_t**](order_totals.md) \* |  | [optional] 
**total** | [**order_total_t**](order_total.md) \* |  | [optional] 
**discounts** | [**list_t**](order_totals_new_discount.md) \* |  | [optional] 
**order_products** | [**list_t**](order_item.md) \* |  | [optional] 
**bundles** | [**list_t**](order_item.md) \* |  | [optional] 
**modified_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**finished_time** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**comment** | **char \*** |  | [optional] 
**store_id** | **char \*** |  | [optional] 
**warehouses_ids** | **list_t \*** |  | [optional] 
**refunds** | [**list_t**](order_refund.md) \* |  | [optional] 
**gift_message** | **char \*** |  | [optional] 
**order_details_url** | **char \*** |  | [optional] 
**additional_fields** | [**object_t**](.md) \* |  | [optional] 
**custom_fields** | [**object_t**](.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


