{% extends 'base.md' %}
{% import 'base.inc' as base %}

{% macro create_centos_7_info() %}
{{ base.create_os_block(
    type='warning',
    title='CentOS 7.9 - Approaching EOL',
    description='On June 30, 2024, CentOS 7 will reach \'End of Life\', meaning it will be no longer supported. **DO NOT** use this distribution in production for any new machines! Begin retiring and rebuilding those that utilize it.'
) }}
{% endmacro %}

{% macro create_centos_8_info() %}
{{ base.create_os_block(
    type='danger',
    title='CentOS 8.5 - Past EOL - Not For Production',
    description='As of December 31, 2021, CentOS 8 reached \'End of Life\', meaning it is no longer supported. **DO NOT** use this distribution in production!'
) }}
{% endmacro %}

{% macro create_centos_stream_info() %}
{{ base.create_os_block(
    type='warning',
    title='CentOS Stream - Upstream os - Not For Production',
    description='CentOS Stream is the current continuation of CentOS 8 that is supported by RedHat. The Stream version is not suitable for production as it is an upstream branch. This means it gets fixes before RedHat, which may not be ready for \'prime time\' as it were. **DO NOT** use this distribution in production!'
) }}
{% endmacro %}