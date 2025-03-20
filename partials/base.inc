{### BASE DOCUMENTATION HEADER
/**md 
{% import 'base.inc' as base %}
# Base Macros
## Importing the Base Macros
In order to utilize the base macros in your project, include them at the top of the page like so:
```
{% raw %}
{% import 'base.inc' as base %}
{% endraw %}
```
Then you can call any method defined in the base macros via {% raw %}`{{ base.{MACRO_NAME_HERE}() }}`{% endraw %}

These base macros provide common utility functions used by other macro components.
**/
#}

{### START_MACRO ###}
/**md
## create_os_block - Creates an OS information admonition
This macro creates a standardized OS information block using an admonition.

### Parameters
- type (String) - The admonition type (info, warning, tip, etc.)
- title (String) - The title for the OS information block
- description (String) - The description with details about the OS

### Returns
An admonition containing the OS information
**/
{% macro create_os_block(type='info', title='OS Information', description='OS details go here') %}
{% from 'material.inc' import admonition %}
{{ admonition(type=type, title=title, description=description) }}
{% endmacro %}
{### END_MACRO ###}

{### START_MACRO ###}
/**md
## create_default_admonition - Creates a simple admonition with default styling
This is a convenience wrapper around the material.admonition macro.

### Parameters
- type (String) - The admonition type (info, warning, tip, etc.)
- title (String) - The title for the admonition
- description (String) - The description content

### Returns
A standard admonition with the specified parameters
**/
{% macro create_default_admonition(type='info', title='Information', description='Information goes here') %}
{% from 'material.inc' import admonition %}
{{ admonition(type=type, title=title, description=description) }}
{% endmacro %}
{### END_MACRO ###}