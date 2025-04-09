# customer_update_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**id** | **char \*** | Entity id | [optional] 
**group_id** | **char \*** | Customer group_id | [optional] 
**group_ids** | **char \*** | Groups that will be assigned to a customer | [optional] 
**group** | **char \*** | Defines the group where the customer | [optional] 
**email** | **char \*** | Defines customer&#39;s email | [optional] 
**phone** | **char \*** | Defines customer&#39;s phone number | [optional] 
**first_name** | **char \*** | Defines customer&#39;s first name | [optional] 
**last_name** | **char \*** | Defines customer&#39;s last name | [optional] 
**birth_day** | **char \*** | Defines customer&#39;s birthday | [optional] 
**news_letter_subscription** | **int** | Defines whether the newsletter subscription is available for the user | [optional] 
**consents** | [**list_t**](customer_add_consents_inner.md) \* | Defines consents to notifications | [optional] 
**tags** | **char \*** | Customer tags | [optional] 
**gender** | **char \*** | Defines customer&#39;s gender | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**note** | **char \*** | The customer note. | [optional] 
**status** | **char \*** | Defines customer&#39;s status | [optional] 
**address** | [**list_t**](customer_update_address_inner.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


