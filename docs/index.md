# Operating System Templates

This section contains templates and macros specific to different operating systems. These templates help create consistent documentation across different OS platforms.

## Available OS Templates

- **AlmaLinux**: Templates for AlmaLinux distributions
- **CentOS**: Templates for CentOS distributions
- **Debian**: Templates for Debian-based distributions
- **Oracle Linux**: Templates for Oracle Linux distributions
- **Ubuntu**: Templates for Ubuntu distributions
- **Windows**: Templates for Windows operating systems

## How to Use OS Templates

OS templates can be imported and used in your documentation to provide consistent information about operating system compatibility, EOL dates, and recommendations.

```
{% raw %}
{% import 'os/centos/centos.md' as centos %}

{{ centos.create_centos_7_info() }}
{% endraw %}
```

This will generate a standardized admonition with information about CentOS 7.9.