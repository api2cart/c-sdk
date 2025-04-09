# shipment_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**order_id** | **char \*** |  | [optional] 
**name** | **char \*** |  | [optional] 
**warehouse_id** | **char \*** |  | [optional] 
**shipment_provider** | **char \*** |  | [optional] 
**tracking_numbers** | [**list_t**](shipment_tracking_number.md) \* |  | [optional] 
**created_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**modified_time** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**items** | [**list_t**](shipment_item.md) \* |  | [optional] 
**is_shipped** | **int** |  | [optional] 
**delivered_at** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**additional_fields** | [**object_t**](.md) \* |  | [optional] 
**custom_fields** | [**object_t**](.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


