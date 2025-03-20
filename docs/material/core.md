# Core Components

{% import 'core.inc' as core %}

The core components provide utility macros that simplify common documentation patterns.

## Importing Core Components

```
{% raw %}
{% import 'core.inc' as core %}
{% endraw %}
```

## Available Core Macros

### create_sudo_admonition

Creates a standardized admonition for explaining sudo usage in documentation.

**Parameters:**

- `type` (String): The type of admonition to use. Defaults to 'info'.

**Example:**

```

{% raw %}
{{ core.create_sudo_admonition() }}
{% endraw %}
```

**Result:**

{{ core.create_sudo_admonition() }}

### create_note

Creates a simple note admonition.

**Parameters:**

- `title` (String): Optional title for the note. If omitted, just shows the note icon.
- `description` (String): The content of the note.

**Example:**

```

{% raw %}
{{ core.create_note(
    title='Quick Tip',
    description='Here\'s a helpful tip that might save you some time.'
) }}
{% endraw %}
```

**Result:**

{{ core.create_note(
    title='Quick Tip',
    description='Here\'s a helpful tip that might save you some time.'
) }}