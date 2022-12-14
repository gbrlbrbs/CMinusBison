#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#define SIZE 211

#define SHIFT 4

enum vartype { VOID_VAR, INT_VAR };
enum recordtype { SIMPLE_VAR_RECORD, ARRAY_VAR_RECORD, FUNCTION_RECORD };

typedef struct ParamList {
    enum vartype type;
    struct ParamList *next;
} * ParamList;

struct symtab_entry {
    enum recordtype t;
    int scope;
    char *name;
    union {
        struct {
            char *name;
        } simple_var_record;

        struct {
            char *name;
            unsigned int length;
        } array_var_record;

        struct {
            char *name;
            enum vartype return_type;
            struct ParamList *param_list;
        } function_record;
    } u;
    struct symtab_entry *next;
};

static int hash(char *key);
int insert_record(struct symtab_entry *to_insert, unsigned int loc);
int insert_simple_var_record(char *name, int scope);
int insert_array_var_record(char *name, int scope, unsigned int length);
int insert_function_record(char *name, int scope);
int symtab_lookup(char *name, int scope);
int print_symtab();

static struct symtab_entry *hashTable[SIZE];

#endif