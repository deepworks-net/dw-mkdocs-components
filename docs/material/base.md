# Base Components

{% import 'base.inc' as base %}

The base components provide foundational macros used by other components in the library.

## Importing Base Components

```
{% raw %}
{% import 'base.inc' as base %}
{% endraw %}
```

## Available Base Macros

### create_os_block

Creates a standardized OS information block using an admonition.

**Parameters:**
- `type` (String): The admonition type (info, warning, tip, etc.)
- `title` (String): The title for the OS information block
- `description` (String): The description with details about the OS

**Example:**

```
{% raw %}
{{ base.create_os_block(
    type='tip',
    title='Ubuntu 22.04 LTS - Production Ready',
    description='Ubuntu 22.04 LTS is supported through April 2027 and is recommended for production use.'
) }}
{% endraw %}
```

**Result:**

{{ base.create_os_block(
    type='tip',
    title='Ubuntu 22.04 LTS - Production Ready',
    description='Ubuntu 22.04 LTS is supported through April 2027 and is recommended for production use.'
) }}

### create_default_admonition

Creates a simple admonition with default styling.

**Parameters:**
- `type` (String): The admonition type (info, warning, tip, etc.)
- `title` (String): The title for the admonition
- `description` (String): The description content

**Example:**

```
{% raw %}
{{ base.create_default_admonition(
    type='warning',
    title='Important Note',
    description='This is an important warning that you should pay attention to.'
) }}
{% endraw %}
```

**Result:**

{{ base.create_default_admonition(
    type='warning',
    title='Important Note',
    description='This is an important warning that you should pay attention to.'
) }}