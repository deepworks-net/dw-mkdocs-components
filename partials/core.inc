{### DOCUMENTATION HEADER
/**md 
{% import 'core.inc' as core %}
# Core Macros
## Importing the Core Macros
In order to utilize the core macros in your project, include them at the top of the page like so:
```
{% raw %}
{% import 'core.inc' as core %}
{% endraw %}
```
Then you can call any method defined in the core macros via {% raw %}`{{ core.{MACRO_NAME_HERE}() }}`{% endraw %}

These core macros are meant to simplify using Material Markdown features into reusable functions that can be utilized via the macro plugin and with Jinja.
**/
#}

{### START_MACRO ###}
/**md
## create_sudo_admonition - Creates a standardized sudo note admonition
This macro creates a standardized admonition for explaining sudo usage in documentation.

### Parameters
- type (String) - The type of admonition to use. Defaults to 'info'.

### Returns
An admonition containing the sudo usage information
**/
{% macro create_sudo_admonition(type='info') %}
{% from 'material.inc' import admonition %}
{% set sudo_description %}
*When installing/configuring the server as the root user- which <b>IS NOT</b> recommended- you can omit the `sudo` command from each step that uses it.*

*It is recommended to setup a user with the proper sudo permissions instead of using the root account per best practices.*
{% endset %}
{{ admonition(type=type, title='About sudo commands', description=sudo_description) }}
{% endmacro %}
{### END_MACRO ###}

{### START_MACRO ###}
/**md
## create_note - Creates a simple note admonition
This macro is a convenience wrapper for creating note admonitions.

### Parameters
- title (String) - Optional title for the note. If omitted, just shows the note icon.
- description (String) - The content of the note.

### Returns
A note admonition with the specified content
**/
{% macro create_note(title=None, description='Note content goes here') %}
{% from 'material.inc' import admonition %}
{{ admonition(type='note', title=title, description=description) }}
{% endmacro %}
{### END_MACRO ###}