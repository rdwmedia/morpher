#ifndef PHP_HELLO_H
#define PHP_HELLO_H 1
#define PHP_HELLO_WORLD_VERSION "1.0"
#define PHP_HELLO_WORLD_EXTNAME "morpher"

PHP_FUNCTION(morpher_inflect);
PHP_FUNCTION(morpher_get_gender);
PHP_FUNCTION(morpher_spell);
PHP_FUNCTION(morpher_ukr_inflect);
PHP_FUNCTION(morpher_ukr_get_gender);

extern zend_module_entry hello_module_entry;
#define phpext_hello_ptr &hello_module_entry

#endif
