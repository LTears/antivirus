#ifndef _KLPRESDEFS_H_
#define _KLPRESDEFS_H_

namespace KLPRES
{

//////////////////////////////////////////////////////////////////////////
// Value names to store subscription list in Settings Storage
const wchar_t SS_SUBSCRIPTIONS_NAME[] = L"PRES";
const wchar_t SS_SUBSCRIPTIONS_VERSION[] = L"1.0";
const wchar_t SS_SUBSCRIPTIONS_SECTION_NAME[] = L"SUBSCRIPTIONS";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_BODY_FILTER[] = L"SUBSCRIPTION_BODY_FILTER";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENT_TYPE[] = L"SUBSCRIPTION_EVENT_TYPE";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENT_INFO_MASK[] = L"SUBSCRIPTION_EVENT_INFO_MASK";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENT_INFO_MASK_VALUE_NAME[] = L"SUBSCRIPTION_EVENT_INFO_MASK_VALUE_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENT_INFO_MASK_VALUE_TYPE[] = L"SUBSCRIPTION_EVENT_INFO_MASK_VALUE_TYPE";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENT_INFO_MASK_VALUE_ID[] = L"SUBSCRIPTION_EVENT_INFO_MASK_VALUE_ID";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_CLOSE_EVENT_STORE_TIMEOUT[] = L"SUBSCRIPTION_CLOSE_EVENT_STORE_TIMEOUT";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_PAUSED[] = L"SUBSCRIPTION_PAUSED";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_STORE_EVENTS_AS[] = L"SUBSCRIPTION_STORE_EVENTS_AS";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_STORE_EVENTS_AS_TEXT_DELIMITER[] = L"SUBSCRIPTION_STORE_EVENTS_AS_TEXT_DELIMITER";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENTS_FILE_NAME[] = L"SUBSCRIPTION_STORE_EVENTS_FILE_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_EVENTS_PARAMS_SORT_MASK[] = L"SUBSCRIPTION_EVENTS_PARAMS_SORT_MASK";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_FILTER_PRODUCT_NAME[] = L"SUBSCRIPTION_FILTER_PRODUCT_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_FILTER_VERSION[] = L"SUBSCRIPTION_FILTER_VERSION";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_FILTER_COMPONENT_NAME[] = L"SUBSCRIPTION_FILTER_COMPONENT_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_FILTER_INSTANCE_ID[] = L"SUBSCRIPTION_FILTER_INSTANCE_ID";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_PERSIST[] = L"SUBSCRIPTION_PERSIST";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_MAX_EVENTS[] = L"SUBSCRIPTION_MAX_EVENTS";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_PAGE_SIZE[] = L"SUBSCRIPTION_PAGE_SIZE";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_USE_REC_NUM_INDEX[] = L"SUBSCRIPTION_USE_REC_NUM_INDEX";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_SUBSCRIBER_PRODUCT_NAME[] = L"SUBSCRIPTION_SUBSCRIBER_PRODUCT_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_SUBSCRIBER_VERSION[] = L"SUBSCRIPTION_SUBSCRIBER_FILTER_VERSION";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_SUBSCRIBER_COMPONENT_NAME[] = L"SUBSCRIPTION_SUBSCRIBER_FILTER_COMPONENT_NAME";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_SUBSCRIBER_INSTANCE_ID[] = L"SUBSCRIPTION_SUBSCRIBER_FILTER_INSTANCE_ID";

const wchar_t SS_VALUE_NAME_SUBSCRIPTION_KEEP_EVENTS[] = L"SUBSCRIPTION_KEEP_EVENTS";

//////////////////////////////////////////////////////////////////////////
// Value names to store event list in Settings Storage
const wchar_t SS_VALUE_NAME_EVENTS_ARRAY[] = L"EVENTS_ARRAY";

const wchar_t SS_EVENTS_NAME[] = L"PRES";
const wchar_t SS_EVENTS_VERSION[] = L"1.0";
const wchar_t SS_EVENTS_SECTION_NAME[] = L"EVENTS";

const wchar_t SS_VALUE_NAME_EVENT_CID_PRODUCT_NAME[] = L"SUBSCRIPTION_FILTER_PRODUCT_NAME";
const wchar_t SS_VALUE_NAME_EVENT_CID_VERSION[] = L"SUBSCRIPTION_FILTER_VERSION";
const wchar_t SS_VALUE_NAME_EVENT_CID_COMPONENT_NAME[] = L"SUBSCRIPTION_FILTER_COMPONENT_NAME";
const wchar_t SS_VALUE_NAME_EVENT_CID_INSTANCE_ID[] = L"SUBSCRIPTION_FILTER_INSTANCE_ID";

const wchar_t SS_VALUE_NAME_EVENT_TYPE[] = L"EVENT_TYPE";
const wchar_t SS_VALUE_NAME_EVENT_BODY[] = L"EVENT_BODY";
const wchar_t SS_VALUE_NAME_EVENT_TIME[] = L"EVENT_TIME";
const wchar_t SS_VALUE_NAME_EVENT_ID[] = L"EVENT_ID";
const wchar_t SS_VALUE_NAME_SUBSCRIPTION_ID[] = L"SUBSCRIPTION_ID";
const wchar_t SS_VALUE_NAME_EVENT_LIFETIME[] = L"EVENT_LIFETIME";

const wchar_t SS_RANGES[] = L"RANGES";
const wchar_t SS_RANGE_FIRST[] = L"RANGE_FIRST";
const wchar_t SS_RANGE_SECOND[] = L"RANGE_SECOND";

};

#endif