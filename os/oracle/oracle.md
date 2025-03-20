{% extends 'base.md' %}
{% import 'base.inc' as base %}

{% macro create_oracle_8_info() %}
{{ base.create_os_block(
    type='tip',
    title='Oracle 8.7 - Production Ready',
    description='Oracle 8 is currently supported through July 1, 2029 and is an open-source, binary clone of RedHat. This distribution is one of the spiritual successors to CentOS 8.'
) }}
{% endmacro %}