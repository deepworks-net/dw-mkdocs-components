{% extends 'base.md'%}

{% macro get_os_centos_7() %}{{ get_os_block('WARNING','CentOS 7.9 - Approaching EOL','On June 30, 2024, CentOS 7 will reach \'End of Life\', meaning it will be no longer supported. **DO NOT** use this distribution in production for any new machines! Begin retiring and rebuilding those that utilize it.') }}{% endmacro %}

{% macro get_os_centos_8() %}{{ get_os_block('DANGER','CentOS 8.5 - Past EOL - Not For Production','As of December 31, 2021, CentOS 8 reached \'End of Life\', meaning it is no longer supported. **DO NOT** use this distribution in production!') }}{% endmacro %}

{% macro get_os_centos_stream() %}{{ get_os_block('WARNING','CentOS Stream - Upstream os - Not For Production','CentOS Stream is the current continuation of CentOS 8 that is supported by RedHat. The Stream version is not suitable for production as it is an upstream branch. This means it gets fixes before RedHat, which may not be ready for \'prime time\' as it were. **DO NOT** use this distribution in production!') }}{% endmacro %}