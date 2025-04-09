# coupon_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** |  | [optional] 
**code** | **char \*** |  | [optional] 
**codes** | [**list_t**](coupon_code.md) \* |  | [optional] 
**name** | **char \*** |  | [optional] 
**description** | **char \*** |  | [optional] 
**actions** | [**list_t**](coupon_action.md) \* |  | [optional] 
**date_start** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**date_end** | [**a2_c_date_time_t**](a2_c_date_time.md) \* |  | [optional] 
**avail** | **int** |  | [optional] 
**priority** | **int** |  | [optional] 
**used_times** | **int** |  | [optional] 
**usage_limit** | **int** |  | [optional] 
**usage_limit_per_customer** | **int** |  | [optional] 
**logic_operator** | **char \*** |  | [optional] 
**conditions** | [**list_t**](coupon_condition.md) \* |  | [optional] 
**usage_history** | [**list_t**](coupon_history.md) \* |  | [optional] 
**additional_fields** | [**object_t**](.md) \* |  | [optional] 
**custom_fields** | [**object_t**](.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


