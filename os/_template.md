{% extends 'base.md' %}
{% import 'base.inc' as base %}

{# 
This is a template file for OS-specific documentation.
To create a new OS document, copy this template and fill in the appropriate details.
#}

{% macro create_os_info(type='info', title='OS Information', description='OS details go here') %}
{{ base.create_os_block(type=type, title=title, description=description) }}
{% endmacro %}