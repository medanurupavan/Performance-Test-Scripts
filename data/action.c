Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_reg_find("Text=AgentLink", 
		LAST);

	web_url("qa-agentlink.secura.net", 
		"URL=https://qa-agentlink.secura.net/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/AgentLink/fonts/Gotham/Gotham-Black.otf", ENDITEM, 
		"Url=/AgentLink/fonts/fontawesome-webfont.eot?", ENDITEM, 
		"Url=/AgentLink/fonts/glyphicons-halflings-regular.eot?", ENDITEM, 
		LAST);

	web_reg_find("Text=AgentLink", 
		LAST);

	web_url("favicon.ico", 
		"URL=https://qa-agentlink.secura.net/favicon.ico", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Login");

	web_reg_find("Text=Redirect", 
		LAST);

	web_submit_data("qa-agentlink.secura.net_2", 
		"Action=https://qa-agentlink.secura.net/", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=httpd_username", "Value=agntporttest0+0200681@gmail.com", ENDITEM, 
		"Name=httpd_password", "Value=Portal123*", ENDITEM, 
		EXTRARES, 
		"Url=/favicon.ico", "Referer=", ENDITEM, 
		"Url=/AgentLink/fonts/Gotham/Gotham-Black.otf", "Referer=https://qa-agentlink.secura.net/AgentLink", ENDITEM, 
		"Url=/AgentLink/fonts/glyphicons-halflings-regular.eot?", "Referer=https://qa-agentlink.secura.net/AgentLink", ENDITEM, 
		"Url=/AgentLink/fonts/fontawesome-webfont.eot?", "Referer=https://qa-agentlink.secura.net/AgentLink", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	lr_start_transaction("Navigate to Portal");

	web_reg_find("Text=agencyportal", 
		LAST);

	web_url("Agency Portal", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/AgentLink", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=assets/fonts/proxima-nova/ProximaNova-Reg-webfont.eot", "Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", ENDITEM, 
		"Url=assets/fonts/font-awesome/fontawesome-webfont.eot", "Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", ENDITEM, 
		LAST);

	web_url("messages.tpl.jsp", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/shared/partials/messages.tpl.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_url("WorkItemsView", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/worklists/workitems/views/WorkItemsView?CSRF_TOKEN=0e17b5d714bc83dccc3df28f2ce8fde1fb4e59cf5e3eb2557860215c7cb91b5f&saved_search_id=-1", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_url("cardView.jsp", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/worklist/partials/cardView.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("FileUploadServlet", 
		"Action=https://qa-agentlink.secura.net/AgencyPortal/FileUploadServlet", 
		"Method=POST", 
		"TargetFrame=", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=requestType", "Value=list", ENDITEM, 
		LAST);

	web_url("STATUS", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/STATUS?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_url("worklistAdvancedSearch", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/products/transactions/worklist/pages/worklistAdvancedSearch?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NewWorkItemLink", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/NewWorkItemLink?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	web_url("ACCOUNT_TYPE", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/ACCOUNT_TYPE?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("TRANSACTION_TYPE", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/TRANSACTION_TYPE?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("LOB", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/LOB?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_url("NewWorkItemLink_2", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/lookups/basic/NewWorkItemLink?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&listId=WorkItemsView&worklistType=workitems", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("WorkItemsView_2", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/worklists/workitems/views/WorkItemsView?CSRF_TOKEN=9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9&saved_search_id=-1", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"Body={\"csrftokenname\":\"CSRF_TOKEN\",\"csrftoken\":\"9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9\",\"searchName\":-1,\"listId\":\"WorkItemsView\",\"worklistType\":\"workitems\",\"CSRF_TOKEN\":\"9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9\",\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/views/WorkItemsView\",\"parameters\":[\"saved_search_id\"]},\"name\":\"WorkItemsView\",\"title\":\"Worklist View\",\"version\":\"5.4.0-0\",\"index\":\""
		"worklist\",\"filters\":[{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/filter_infos/lob?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},\"name\":\"lob\",\"title\":\"LOB\",\"filterOptions\":[{\"title\":\"Commercial Auto\",\"value\":\"AUTOB\",\"selected\":false},{\"title\":\"Commercial Package\",\"value\":\"CPKGE\",\"selected\":false},{\"title\":\"Workers' Comp\",\"value\":\"WORK\",\"selected\":false}],\"styleClass\":null,\"format\":null,\"relatedFieldId\":\"lob\",\"type\""
		":\"LOB\",\"isSaveable\":true},{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/filter_infos/status?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},\"name\":\"status\",\"title\":\"Status\",\"filterOptions\":[{\"title\":\"Closed\",\"value\":\"CLOSED\",\"selected\":false},{\"title\":\"In-Progress\",\"value\":\"INPROGRESS\",\"selected\":false},{\"title\":\"Ineligible / Clearance Approved\",\"value\":\"APPROVEINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\"Ineligible / "
		"Clearance Declined\",\"value\":\"REJECTINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\"Ineligible / Clearance Referred\",\"value\":\"REFERINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\"Issued\",\"value\":\"ISSUED\",\"selected\":false},{\"title\":\"Referred to UW\",\"value\":\"REFER\",\"selected\":false},{\"title\":\"SECURA In-Progress\",\"value\":\"SECURAINPROGRESS\",\"selected\":false},{\"title\":\"SECURA Pending\",\"value\":\"SECURAPENDING\",\"selected\":false},{\"title\":\""
		"Submitted for Issuance\",\"value\":\"SUBMITTEDFORISSUANCE\",\"selected\":false},{\"title\":\"UW Approved\",\"value\":\"APPROVE\",\"selected\":false},{\"title\":\"UW Declined\",\"value\":\"DECLINE\",\"selected\":false}],\"styleClass\":null,\"format\":null,\"relatedFieldId\":\"status\",\"type\":\"STATUS\",\"isSaveable\":true}],\"sortInfo\":{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/sort_info?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},\"name\":\"workitem_sort_by\","
		"\"title\":\"Sort By\",\"sortOptions\":[{\"relatedFieldId\":\"entity_name\",\"title\":\"Name\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"quote_number\",\"title\":\"Quote Number\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"lob\",\"title\":\"LOB\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"effective_date\",\"title\":\"Effective\",\"ascending\":false,\"selected\":false,\"isSaveable\""
		":true},{\"relatedFieldId\":\"status\",\"title\":\"Status\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"premium\",\"title\":\"Premium\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"agency_code\",\"title\":\"Agency Code\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"agency_name\",\"title\":\"Agency Name\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\""
		"underwriter_name\",\"title\":\"Underwriter\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"last_update_time\",\"title\":\"Updated\",\"ascending\":false,\"selected\":true,\"isSaveable\":true}]},\"queryInfo\":{\"name\":\"workitem_query_info\",\"title\":\"More Options\",\"queryFields\":[{\"relatedFieldId\":\"quote_number\",\"title\":\"Quote Number\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\""
		"quoteNumber\",\"isSaveable\":true},{\"relatedFieldId\":\"effective_date\",\"title\":\"Effective\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"DATE\",\"interactive\":true,\"pageFieldId\":\"effectiveDate\",\"isSaveable\":true},{\"relatedFieldId\":\"agency_code\",\"title\":\"Agency Code\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"agencyCode\",\"isSaveable\":true},{\"relatedFieldId\":\"agency_name\",\"title\""
		":\"Agency Name\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"agencyName\",\"isSaveable\":true},{\"relatedFieldId\":\"underwriter_name\",\"title\":\"Underwriter\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"underwriterName\",\"isSaveable\":true},{\"relatedFieldId\":\"entity_name\",\"title\":\"Name\",\"selected\":false,\"opCode\":{\"needsTwoOperands\":false,\""
		"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"agency_name\",\"title\":\"Agency Name\",\"selected\":false,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"underwriter_name\",\"title\":\"Underwriter\",\"selected\":false,\"opCode\":{\"needsTwoOperands\""
		":false,\"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"status\",\"title\":\"Status\",\"selected\":true,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"NOT_EQUAL\"},\"operands\":[\"DELETE\"],\"dataType\":\"STATUS\",\"interactive\":false,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"commit_flag\",\"title\":\"Commit Flag\",\"selected\":true,\"opCode\":{\"needsTwoOperands\""
		":false,\"value\":\"EQUALS\"},\"operands\":[\"1\"],\"dataType\":\"INTEGER\",\"interactive\":false,\"pageFieldId\":null,\"isSaveable\":false}],\"transactionId\":\"worklist\",\"pageId\":\"worklistAdvancedSearch\",\"links\":[{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/query_info?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},{\"rel\":\"operators\",\"href\":\"/api/worklists/workitems/operator_infos\",\"parameters\":[]},{\"rel\":\"dialog-resource\",\"href\":\"/api/products/"
		"transactions/worklist/pages/worklistAdvancedSearch\",\"parameters\":[]}]},\"listViews\":[{\"fields\":[{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"ID\",\"id\":\"work_item_id\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"Account Id\",\"id\":\"account_id\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Name\",\"id\":\"entity_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\""
		"styleClass\":null,\"format\":null,\"title\":\"Quote Number\",\"id\":\"quote_number\",\"isDisplayed\":true},{\"type\":\"LOB\",\"styleClass\":null,\"format\":null,\"title\":\"LOB\",\"id\":\"lob\",\"isDisplayed\":true},{\"type\":\"DATE\",\"styleClass\":null,\"format\":null,\"title\":\"Effective\",\"id\":\"effective_date\",\"isDisplayed\":true},{\"type\":\"STATUS\",\"styleClass\":null,\"format\":null,\"title\":\"Status\",\"id\":\"status\",\"isDisplayed\":true},{\"type\":\"DECIMAL\",\"styleClass\":null"
		",\"format\":\"currency: ' '\",\"title\":\"Premium\",\"id\":\"premium\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Code\",\"id\":\"agency_code\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Name\",\"id\":\"agency_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter ID\",\"id\":\"underwriter_id\",\"isDisplayed\":false},{\"type\":\""
		"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter\",\"id\":\"underwriter_name\",\"isDisplayed\":true},{\"type\":\"TIME\",\"styleClass\":null,\"format\":null,\"title\":\"Updated\",\"id\":\"last_update_time\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Transaction Type\",\"id\":\"transaction_type\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":\"percentage\",\"title\":\"Complete %\",\"id\":\""
		"complete_percent\",\"isDisplayed\":false}],\"type\":\"CARD\",\"viewPortSize\":20,\"startRowNumber\":0,\"selected\":true,\"fetchSize\":20},{\"fields\":[{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"ID\",\"id\":\"work_item_id\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"Account Id\",\"id\":\"account_id\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Name\",\"id\":\"entity_name\",\""
		"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Quote Number\",\"id\":\"quote_number\",\"isDisplayed\":true},{\"type\":\"LOB\",\"styleClass\":null,\"format\":null,\"title\":\"LOB\",\"id\":\"lob\",\"isDisplayed\":true},{\"type\":\"DATE\",\"styleClass\":null,\"format\":null,\"title\":\"Effective\",\"id\":\"effective_date\",\"isDisplayed\":true},{\"type\":\"STATUS\",\"styleClass\":null,\"format\":null,\"title\":\"Status\",\"id\":\"status\",\"isDisplayed\":true"
		"},{\"type\":\"DECIMAL\",\"styleClass\":null,\"format\":\"currency: ' '\",\"title\":\"Premium\",\"id\":\"premium\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Code\",\"id\":\"agency_code\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Name\",\"id\":\"agency_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter ID\",\"id\":\"underwriter_id"
		"\",\"isDisplayed\":false},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter\",\"id\":\"underwriter_name\",\"isDisplayed\":true},{\"type\":\"TIME\",\"styleClass\":null,\"format\":null,\"title\":\"Updated\",\"id\":\"last_update_time\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Transaction Type\",\"id\":\"transaction_type\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":\"percentage\",\"title\""
		":\"Complete %\",\"id\":\"complete_percent\",\"isDisplayed\":false}],\"type\":\"TABULAR\",\"viewPortSize\":40,\"startRowNumber\":0,\"selected\":false,\"fetchSize\":40}],\"savedSearchInfo\":{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/saved_searches?view_name=WorkItemsView\",\"parameters\":[\"saved_search_id\",\"view_name\"]},\"savedSearches\":[],\"currentSearch\":{\"id\":-1,\"name\":null,\"isActive\":true}},\"lookupLinks\":[{\"rel\":\"lookups.basic.STATUS\",\"href\":\"/api/"
		"lookups/basic/STATUS\",\"parameters\":null},{\"rel\":\"lookups.basic.ACCOUNT_TYPE\",\"href\":\"/api/lookups/basic/ACCOUNT_TYPE\",\"parameters\":null},{\"rel\":\"lookups.basic.TRANSACTION_TYPE\",\"href\":\"/api/lookups/basic/TRANSACTION_TYPE\",\"parameters\":null},{\"rel\":\"lookups.basic.LOB\",\"href\":\"/api/lookups/basic/LOB\",\"parameters\":null},{\"rel\":\"lookups.basic.NewWorkItemLink\",\"href\":\"/api/lookups/basic/NewWorkItemLink\",\"parameters\":[\"worklistType\"]}],\"isSaveable\":true}", 
		LAST);

	web_url("worklist-addnewcard.tpl.jsp", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/worklist/partials/worklist-addnewcard.tpl.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		LAST);

	web_url("custom%3Acom.agencyport.api.pojo.OperatorsListBuilder%3AdataType%3DDATE%3A5.0.0.0", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/products/optionlistids/custom%3Acom.agencyport.api.pojo.OperatorsListBuilder%3AdataType%3DDATE%3A5.0.0.0?transaction_id=worklist&field_id=operator&page_id=worklistAdvancedSearch&CSRF_TOKEN=d61a9a2e55e5d556dfb1d8e507f289cf1390cb9b6cbb84d25b5c51f342f8bb3d", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("WorkItemsView_3", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/api/worklists/workitems/views/WorkItemsView?CSRF_TOKEN=138327dc33d33668ac4460cb2048a531e92abf7f56357c3fe4b21021cde5ecf8&saved_search_id=", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"csrftokenname\":\"CSRF_TOKEN\",\"csrftoken\":\"138327dc33d33668ac4460cb2048a531e92abf7f56357c3fe4b21021cde5ecf8\",\"listId\":\"WorkItemsView\",\"worklistType\":\"workitems\",\"CSRF_TOKEN\":\"9b97b07ac4b7a2e774e7d1032770e0394259c603c93f2ae7d311f38da0245bf9\",\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/views/WorkItemsView\",\"parameters\":[\"saved_search_id\"]},\"name\":\"WorkItemsView\",\"title\":\"Worklist View\",\"version\":\"5.4.0-0\",\"index\":\"worklist\",\"filters\""
		":[{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/filter_infos/lob?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},\"name\":\"lob\",\"title\":\"LOB\",\"filterOptions\":[{\"title\":\"Commercial Auto\",\"value\":\"AUTOB\",\"selected\":false},{\"title\":\"Commercial Package\",\"value\":\"CPKGE\",\"selected\":false},{\"title\":\"Workers' Comp\",\"value\":\"WORK\",\"selected\":false}],\"styleClass\":null,\"format\":null,\"relatedFieldId\":\"lob\",\"type\":\"LOB\",\"isSaveable"
		"\":true,\"status\":{\"isopen\":false}},{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/filter_infos/status?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},\"name\":\"status\",\"title\":\"Status\",\"filterOptions\":[{\"title\":\"Closed\",\"value\":\"CLOSED\",\"selected\":false},{\"title\":\"In-Progress\",\"value\":\"INPROGRESS\",\"selected\":false},{\"title\":\"Ineligible / Clearance Approved\",\"value\":\"APPROVEINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\""
		"Ineligible / Clearance Declined\",\"value\":\"REJECTINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\"Ineligible / Clearance Referred\",\"value\":\"REFERINELIGIBLECLEARANCE\",\"selected\":false},{\"title\":\"Issued\",\"value\":\"ISSUED\",\"selected\":false},{\"title\":\"Referred to UW\",\"value\":\"REFER\",\"selected\":false},{\"title\":\"SECURA In-Progress\",\"value\":\"SECURAINPROGRESS\",\"selected\":false},{\"title\":\"SECURA Pending\",\"value\":\"SECURAPENDING\",\"selected\":false},{\""
		"title\":\"Submitted for Issuance\",\"value\":\"SUBMITTEDFORISSUANCE\",\"selected\":false},{\"title\":\"UW Approved\",\"value\":\"APPROVE\",\"selected\":false},{\"title\":\"UW Declined\",\"value\":\"DECLINE\",\"selected\":false}],\"styleClass\":null,\"format\":null,\"relatedFieldId\":\"status\",\"type\":\"STATUS\",\"isSaveable\":true,\"status\":{\"isopen\":false}}],\"sortInfo\":{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/sort_info?view_name=WorkItemsView\",\"parameters\":[\""
		"view_name\"]},\"name\":\"workitem_sort_by\",\"title\":\"Sort By\",\"sortOptions\":[{\"relatedFieldId\":\"entity_name\",\"title\":\"Name\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"quote_number\",\"title\":\"Quote Number\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"lob\",\"title\":\"LOB\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"effective_date\",\"title\":\"Effective\",\""
		"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"status\",\"title\":\"Status\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"premium\",\"title\":\"Premium\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"agency_code\",\"title\":\"Agency Code\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"agency_name\",\"title\":\"Agency Name\",\"ascending\":false,\"selected\""
		":false,\"isSaveable\":true},{\"relatedFieldId\":\"underwriter_name\",\"title\":\"Underwriter\",\"ascending\":false,\"selected\":false,\"isSaveable\":true},{\"relatedFieldId\":\"last_update_time\",\"title\":\"Updated\",\"ascending\":false,\"selected\":true,\"isSaveable\":true}]},\"queryInfo\":{\"name\":\"workitem_query_info\",\"title\":\"More Options\",\"queryFields\":[{\"relatedFieldId\":\"quote_number\",\"title\":\"Quote Number\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\""
		"STRING\",\"interactive\":true,\"pageFieldId\":\"quoteNumber\",\"isSaveable\":true},{\"relatedFieldId\":\"effective_date\",\"title\":\"Effective\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"DATE\",\"interactive\":true,\"pageFieldId\":\"effectiveDate\",\"isSaveable\":true},{\"relatedFieldId\":\"agency_code\",\"title\":\"Agency Code\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"agencyCode\",\"isSaveable\""
		":true},{\"relatedFieldId\":\"agency_name\",\"title\":\"Agency Name\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"agencyName\",\"isSaveable\":true},{\"relatedFieldId\":\"underwriter_name\",\"title\":\"Underwriter\",\"selected\":false,\"opCode\":null,\"operands\":[],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":\"underwriterName\",\"isSaveable\":true},{\"relatedFieldId\":\"entity_name\",\"title\":\"Name\",\""
		"selected\":false,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"agency_name\",\"title\":\"Agency Name\",\"selected\":false,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"underwriter_name\",\"title\":\""
		"Underwriter\",\"selected\":false,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"CONTAINS\"},\"operands\":[\"*\"],\"dataType\":\"STRING\",\"interactive\":true,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"status\",\"title\":\"Status\",\"selected\":true,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"NOT_EQUAL\"},\"operands\":[\"DELETE\"],\"dataType\":\"STATUS\",\"interactive\":false,\"pageFieldId\":null,\"isSaveable\":false},{\"relatedFieldId\":\"commit_flag\",\"title\":\""
		"Commit Flag\",\"selected\":true,\"opCode\":{\"needsTwoOperands\":false,\"value\":\"EQUALS\"},\"operands\":[\"1\"],\"dataType\":\"INTEGER\",\"interactive\":false,\"pageFieldId\":null,\"isSaveable\":false}],\"transactionId\":\"worklist\",\"pageId\":\"worklistAdvancedSearch\",\"links\":[{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/query_info?view_name=WorkItemsView\",\"parameters\":[\"view_name\"]},{\"rel\":\"operators\",\"href\":\"/api/worklists/workitems/operator_infos\",\"parameters\":[]}"
		",{\"rel\":\"dialog-resource\",\"href\":\"/api/products/transactions/worklist/pages/worklistAdvancedSearch\",\"parameters\":[]}],\"pages\":[{\"name\":\"worklistAdvancedSearch\",\"title\":\"More Options\",\"type\":\"dataEntry\",\"styleClass\":\"\",\"dataSource\":null,\"hasHotFields\":false,\"slowLoader\":false,\"validateTransactionOnDisplay\":false,\"supportsIPDTRDynamicContent\":false,\"sections\":[{\"name\":\"worklistAdvancedSearch\",\"legend\":\"More Options\",\"type\":\"fieldset\",\"styleClass\""
		":\"\",\"interestLevel\":2,\"fields\":[{\"name\":\"quoteNumber\",\"type\":\"text\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Quote Number\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"\",\"length\":-1,\"maxLength\":9,\"minLength\":-1,\"size\":9},{\"name\":\"operator\",\"type\":\"selectlist\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Operator\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"LESS_THAN\",\"optionLists\":[{\""
		"isStatic\":false,\"link\":{\"rel\":\"self\",\"href\":\"/api/products/optionlistids/custom%3Acom.agencyport.api.pojo.OperatorsListBuilder%3AdataType%3DDATE%3A5.0.0.0?transaction_id=worklist&field_id=operator&page_id=worklistAdvancedSearch\",\"parameters\":[\"work_item_id\"]}}]},{\"name\":\"effectiveDate\",\"type\":\"date\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Effective\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"\",\"length\":-1,\"maxLength\":10,\""
		"minLength\":-1,\"size\":10,\"selectedOperator\":\"LESS_THAN\"},{\"name\":\"agencyCode\",\"type\":\"text\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Agency Code\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"\",\"length\":-1,\"maxLength\":15,\"minLength\":-1,\"size\":15},{\"name\":\"agencyName\",\"type\":\"text\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Agency Name\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"\",\""
		"length\":-1,\"maxLength\":40,\"minLength\":-1,\"size\":15},{\"name\":\"underwriterName\",\"type\":\"text\",\"styleClass\":\"\",\"interestLevel\":2,\"isHot\":false,\"label\":\"Underwriter\",\"readOnly\":false,\"required\":false,\"defaultValue\":\"\",\"length\":-1,\"maxLength\":128,\"minLength\":-1,\"size\":15}]}]}]},\"listViews\":[{\"fields\":[{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"ID\",\"id\":\"work_item_id\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass"
		"\":null,\"format\":null,\"title\":\"Account Id\",\"id\":\"account_id\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Name\",\"id\":\"entity_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Quote Number\",\"id\":\"quote_number\",\"isDisplayed\":true},{\"type\":\"LOB\",\"styleClass\":null,\"format\":null,\"title\":\"LOB\",\"id\":\"lob\",\"isDisplayed\":true},{\"type\":\"DATE\",\"styleClass\":null,\"format\""
		":null,\"title\":\"Effective\",\"id\":\"effective_date\",\"isDisplayed\":true},{\"type\":\"STATUS\",\"styleClass\":null,\"format\":null,\"title\":\"Status\",\"id\":\"status\",\"isDisplayed\":true},{\"type\":\"DECIMAL\",\"styleClass\":null,\"format\":\"currency: ' '\",\"title\":\"Premium\",\"id\":\"premium\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Code\",\"id\":\"agency_code\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\""
		"format\":null,\"title\":\"Agency Name\",\"id\":\"agency_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter ID\",\"id\":\"underwriter_id\",\"isDisplayed\":false},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter\",\"id\":\"underwriter_name\",\"isDisplayed\":true},{\"type\":\"TIME\",\"styleClass\":null,\"format\":null,\"title\":\"Updated\",\"id\":\"last_update_time\",\"isDisplayed\":true},{\"type\":\"STRING\","
		"\"styleClass\":null,\"format\":null,\"title\":\"Transaction Type\",\"id\":\"transaction_type\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":\"percentage\",\"title\":\"Complete %\",\"id\":\"complete_percent\",\"isDisplayed\":false}],\"type\":\"CARD\",\"viewPortSize\":20,\"startRowNumber\":0,\"selected\":true,\"fetchSize\":20},{\"fields\":[{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"ID\",\"id\":\"work_item_id\",\"isDisplayed\":false},{\"type\""
		":\"INTEGER\",\"styleClass\":null,\"format\":null,\"title\":\"Account Id\",\"id\":\"account_id\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Name\",\"id\":\"entity_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Quote Number\",\"id\":\"quote_number\",\"isDisplayed\":true},{\"type\":\"LOB\",\"styleClass\":null,\"format\":null,\"title\":\"LOB\",\"id\":\"lob\",\"isDisplayed\":true},{\"type\":\"DATE\",\""
		"styleClass\":null,\"format\":null,\"title\":\"Effective\",\"id\":\"effective_date\",\"isDisplayed\":true},{\"type\":\"STATUS\",\"styleClass\":null,\"format\":null,\"title\":\"Status\",\"id\":\"status\",\"isDisplayed\":true},{\"type\":\"DECIMAL\",\"styleClass\":null,\"format\":\"currency: ' '\",\"title\":\"Premium\",\"id\":\"premium\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Code\",\"id\":\"agency_code\",\"isDisplayed\":true},{\"type\":\""
		"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Agency Name\",\"id\":\"agency_name\",\"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter ID\",\"id\":\"underwriter_id\",\"isDisplayed\":false},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Underwriter\",\"id\":\"underwriter_name\",\"isDisplayed\":true},{\"type\":\"TIME\",\"styleClass\":null,\"format\":null,\"title\":\"Updated\",\"id\":\"last_update_time\",\""
		"isDisplayed\":true},{\"type\":\"STRING\",\"styleClass\":null,\"format\":null,\"title\":\"Transaction Type\",\"id\":\"transaction_type\",\"isDisplayed\":false},{\"type\":\"INTEGER\",\"styleClass\":null,\"format\":\"percentage\",\"title\":\"Complete %\",\"id\":\"complete_percent\",\"isDisplayed\":false}],\"type\":\"TABULAR\",\"viewPortSize\":40,\"startRowNumber\":0,\"selected\":false,\"fetchSize\":40}],\"savedSearchInfo\":{\"link\":{\"rel\":\"self\",\"href\":\"/api/worklists/workitems/saved_searches"
		"?view_name=WorkItemsView\",\"parameters\":[\"saved_search_id\",\"view_name\"]},\"savedSearches\":[],\"currentSearch\":{\"id\":-1,\"name\":null,\"isActive\":true}},\"lookupLinks\":[{\"rel\":\"lookups.basic.STATUS\",\"href\":\"/api/lookups/basic/STATUS\",\"parameters\":null},{\"rel\":\"lookups.basic.ACCOUNT_TYPE\",\"href\":\"/api/lookups/basic/ACCOUNT_TYPE\",\"parameters\":null},{\"rel\":\"lookups.basic.TRANSACTION_TYPE\",\"href\":\"/api/lookups/basic/TRANSACTION_TYPE\",\"parameters\":null},{\"rel\""
		":\"lookups.basic.LOB\",\"href\":\"/api/lookups/basic/LOB\",\"parameters\":null},{\"rel\":\"lookups.basic.NewWorkItemLink\",\"href\":\"/api/lookups/basic/NewWorkItemLink\",\"parameters\":[\"worklistType\"]}],\"isSaveable\":true,\"newWorkItemLinks\":[{\"title\":\"Commercial Package\",\"value\":\"FrontServlet?PAGE_NAME=generalInfoCPP&TRANSACTION_NAME=cpp&FIRST_TIME=true&METHOD=Display&rnd=0.7122266973270003&CSRF_TOKEN=7111f0bf5aa924730285441349327de12e998e51fbebea5674d5e6aef6724a5d\"},{\"title\":\""
		"Commercial Auto\",\"value\":\"FrontServlet?PAGE_NAME=generalInfo&TRANSACTION_NAME=autob&FIRST_TIME=true&METHOD=Display&rnd=0.4603144693536275&CSRF_TOKEN=7111f0bf5aa924730285441349327de12e998e51fbebea5674d5e6aef6724a5d\"},{\"title\":\"Workers Comp\",\"value\":\"FrontServlet?PAGE_NAME=generalInfo&TRANSACTION_NAME=workersComp&FIRST_TIME=true&METHOD=Display&rnd=0.8753946619651611&CSRF_TOKEN=7111f0bf5aa924730285441349327de12e998e51fbebea5674d5e6aef6724a5d\"}]}", 
		LAST);

	web_url("worklist-card.tpl.jsp", 
		"URL=https://qa-agentlink.secura.net/AgencyPortal/worklist/partials/worklist-card.tpl.jsp", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://qa-agentlink.secura.net/AgencyPortal/DisplayWorkInProgress?WorkListType=WorkItemsView", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/AgencyPortal/assets/ico/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	lr_end_transaction("Navigate to Portal",LR_AUTO);

	return 0;
}