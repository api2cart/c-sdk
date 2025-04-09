# customer_add_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**email** | **char \*** | Defines customer&#39;s email | 
**first_name** | **char \*** | Defines customer&#39;s first name | 
**last_name** | **char \*** | Defines customer&#39;s last name | 
**password** | **char \*** | Defines customer&#39;s unique password | [optional] 
**group** | **char \*** | Defines the group where the customer | [optional] 
**group_ids** | **char \*** | Groups that will be assigned to a customer | [optional] 
**created_time** | **char \*** | Entity&#39;s date creation | [optional] 
**modified_time** | **char \*** | Entity&#39;s date modification | [optional] 
**login** | **char \*** | Specifies customer&#39;s login name | [optional] 
**last_login** | **char \*** | Defines customer&#39;s last login time | [optional] 
**birth_day** | **char \*** | Defines customer&#39;s birthday | [optional] 
**status** | **char \*** | Defines customer&#39;s status | [optional] [default to 'enabled']
**news_letter_subscription** | **int** | Defines whether the newsletter subscription is available for the user | [optional] [default to false]
**consents** | [**list_t**](customer_add_consents_inner.md) \* | Defines consents to notifications | [optional] 
**gender** | **char \*** | Defines customer&#39;s gender | [optional] 
**website** | **char \*** | Link to customer website | [optional] 
**store_id** | **char \*** | Store Id | [optional] 
**fax** | **char \*** | Defines customer&#39;s fax | [optional] 
**company** | **char \*** | Defines customer&#39;s company | [optional] 
**phone** | **char \*** | Defines customer&#39;s phone number | [optional] 
**note** | **char \*** | The customer note. | [optional] 
**country** | **char \*** | Specifies ISO code or name of country | [optional] 
**address** | [**list_t**](customer_add_address_inner.md) \* |  | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


