%{

%}

%%

constant:
        INTEGERconstant
        | FLOATINGconstant
        
        | OCTALconstant
        | HEXconstant
        | CHARACTERconstant
        ;

string_literal_list:
                STRINGliteral
                | string_literal_list STRINGliteral
                ;


primary_expression:
        IDENTIFIER  
        | constant
        | string_literal_list
        | '(' comma_expression ')'
        ;

postfix_expression:
        primary_expression
        | postfix_expression '[' comma_expression ']'
        | postfix_expression '(' ')'
        | postfix_expression '(' argument_expression_list ')'
        | postfix_expression {} '.'   member_name
        | postfix_expression {} ARROW member_name
        | postfix_expression ICR
        | postfix_expression DECR
        ;

member_name:
        IDENTIFIER
        | TYPEDEFname
        ;

argument_expression_list:
        assignment_expression
        | argument_expression_list ',' assignment_expression
        ;

unary_expression:
        postfix_expression
        | ICR unary_expression
        | DECR unary_expression
        | unary_operator cast_expression
        | SIZEOF unary_expression
        | SIZEOF '(' type_name ')'
        ;

unary_operator:
        '&'
        | '*'
        | '+'
        | '-'
        | '~'
        | '!'
        ;

cast_expression:
        unary_expression
        | '(' type_name ')' cast_expression
        ;

multiplicative_expression:
        cast_expression
        | multiplicative_expression '*' cast_expression
        | multiplicative_expression '/' cast_expression
        | multiplicative_expression '%' cast_expression
        ;

additive_expression:
        multiplicative_expression
        | additive_expression '+' multiplicative_expression
        | additive_expression '-' multiplicative_expression
        ;

shift_expression:
        additive_expression
        | shift_expression LS additive_expression
        | shift_expression RS additive_expression
        ;

relational_expression:
        shift_expression
        | relational_expression '<' shift_expression
        | relational_expression '>' shift_expression
        | relational_expression LE shift_expression
        | relational_expression GE shift_expression
        ;

equality_expression:
        relational_expression
        | equality_expression EQ relational_expression
        | equality_expression NE relational_expression
        ;

AND_expression:
        equality_expression
        | AND_expression '&' equality_expression
        ;

exclusive_OR_expression:
        AND_expression
        | exclusive_OR_expression '^' AND_expression
        ;

inclusive_OR_expression:
        exclusive_OR_expression
        | inclusive_OR_expression '|' exclusive_OR_expression
        ;

logical_AND_expression:
        inclusive_OR_expression
        | logical_AND_expression ANDAND inclusive_OR_expression
        ;

logical_OR_expression:
        logical_AND_expression
        | logical_OR_expression OROR logical_AND_expression
        ;

conditional_expression:
        logical_OR_expression
        | logical_OR_expression '?' comma_expression ':'
                conditional_expression
        ;

assignment_expression:
        conditional_expression
        | unary_expression assignment_operator assignment_expression
        ;

assignment_operator:
        '='
        | MULTassign
        | DIVassign
        | MODassign
        | PLUSassign
        | MINUSassign
        | LSassign
        | RSassign
        | ANDassign
        | ERassign
        | ORassign
        ;

comma_expression:
        assignment_expression
        | comma_expression ',' assignment_expression
        ;

constant_expression:
        conditional_expression
        ;

comma_expression_opt:
        | comma_expression
        ;

declaration:
        sue_declaration_specifier ';'
        | sue_type_specifier ';'
        | declaring_list ';'
        | default_declaring_list ';'
        ;

default_declaring_list:  
        declaration_qualifier_list identifier_declarator {} initializer_opt
        | type_qualifier_list identifier_declarator {} initializer_opt
        | default_declaring_list ',' identifier_declarator {} initializer_opt
        ;

declaring_list:
        declaration_specifier declarator {} initializer_opt
        | type_specifier declarator {} initializer_opt
        | declaring_list ',' declarator {} initializer_opt
        ;

declaration_specifier:
        basic_declaration_specifier          
        | sue_declaration_specifier          
        | typedef_declaration_specifier     
        ;

type_specifier:
        basic_type_specifier                
        | sue_type_specifier                 
        | typedef_type_specifier             
        ;


declaration_qualifier_list:  
        storage_class
        | type_qualifier_list storage_class
        | declaration_qualifier_list declaration_qualifier
        ;

type_qualifier_list:
        type_qualifier
        | type_qualifier_list type_qualifier
        ;

declaration_qualifier:
        storage_class
        | type_qualifier                  
        ;

type_qualifier:
        CONST
        | VOLATILE
        ;

basic_declaration_specifier:     
        declaration_qualifier_list basic_type_name
        | basic_type_specifier  storage_class
        | basic_declaration_specifier declaration_qualifier
        | basic_declaration_specifier basic_type_name
        ;

basic_type_specifier:
        basic_type_name            
        | type_qualifier_list  basic_type_name
        | basic_type_specifier type_qualifier
        | basic_type_specifier basic_type_name
        ;

sue_declaration_specifier:          
        declaration_qualifier_list  elaborated_type_name
        | sue_type_specifier        storage_class
        | sue_declaration_specifier declaration_qualifier
        ;

sue_type_specifier:
        elaborated_type_name              
        | type_qualifier_list elaborated_type_name
        | sue_type_specifier  type_qualifier
        ;


typedef_declaration_specifier:       
        typedef_type_specifier          storage_class
        | declaration_qualifier_list    TYPEDEFname
        | typedef_declaration_specifier declaration_qualifier
        ;

typedef_type_specifier:              
        TYPEDEFname
        | type_qualifier_list    TYPEDEFname
        | typedef_type_specifier type_qualifier
        ;

storage_class:
        TYPEDEF
        | EXTERN
        | STATIC
        | AUTO
        | REGISTER
        ;

basic_type_name:
        INT
        | CHAR
        | SHORT
        | LONG
        | FLOAT
        | DOUBLE
        | SIGNED
        | UNSIGNED
        | VOID
        ;

elaborated_type_name:
        aggregate_name
        | enum_name
        ;

aggregate_name:
        aggregate_key '{'  member_declaration_list '}'
        | aggregate_key identifier_or_typedef_name
                '{'  member_declaration_list '}'
        | aggregate_key identifier_or_typedef_name
        ;

aggregate_key:
        STRUCT
        | UNION
        ;

 member_declaration_list:
        member_declaration
        |  member_declaration_list member_declaration
        ;

member_declaration:
        member_declaring_list ';'
        | member_default_declaring_list ';'
        ;

member_default_declaring_list:        
        type_qualifier_list member_identifier_declarator
        | member_default_declaring_list ',' member_identifier_declarator
        ;

member_declaring_list:
        type_specifier member_declarator
        | member_declaring_list ',' member_declarator
        ;


member_declarator:
        declarator bit_field_size_opt
        | bit_field_size
        ;

member_identifier_declarator:
        identifier_declarator {} bit_field_size_opt
        | bit_field_size
        ;

bit_field_size_opt:
        /* nothing */
        | bit_field_size
        ;

bit_field_size:
        ':' constant_expression
        ;

enum_name:
        ENUM '{' enumerator_list '}'
        | ENUM identifier_or_typedef_name '{' enumerator_list '}'
        | ENUM identifier_or_typedef_name
        ;

enumerator_list:
        identifier_or_typedef_name enumerator_value_opt
        | enumerator_list ',' identifier_or_typedef_name enumerator_value_opt
        ;

enumerator_value_opt:
        | '=' constant_expression
        ;

parameter_type_list:
        parameter_list
        | parameter_list ',' ELLIPSIS
        ;

parameter_list:
        parameter_declaration
        | parameter_list ',' parameter_declaration
        ;

parameter_declaration:
        declaration_specifier
        | declaration_specifier abstract_declarator
        | declaration_specifier identifier_declarator
        | declaration_specifier parameter_typedef_declarator
        | declaration_qualifier_list
        | declaration_qualifier_list abstract_declarator
        | declaration_qualifier_list identifier_declarator
        | type_specifier
        | type_specifier abstract_declarator
        | type_specifier identifier_declarator
        | type_specifier parameter_typedef_declarator
        | type_qualifier_list
        | type_qualifier_list abstract_declarator
        | type_qualifier_list identifier_declarator
        ;


identifier_list:
        IDENTIFIER
        | identifier_list ',' IDENTIFIER
        ;

identifier_or_typedef_name:
        IDENTIFIER
        | TYPEDEFname
        ;

type_name:
        type_specifier
        | type_specifier abstract_declarator
        | type_qualifier_list
        | type_qualifier_list abstract_declarator
        ;

initializer_opt:
        | '=' initializer
        ;

initializer:
        '{' initializer_list '}'
        | '{' initializer_list ',' '}'
        | assignment_expression
        ;

initializer_list:
        initializer
        | initializer_list ',' initializer
        ;


statement:
        labeled_statement
        | compound_statement
        | expression_statement
        | selection_statement
        | iteration_statement
        | jump_statement
        ;

labeled_statement:
        identifier_or_typedef_name ':' statement
        | CASE constant_expression ':' statement
        | DEFAULT ':' statement
        ;

compound_statement:
        '{' '}'
        | '{' declaration_list '}'
        | '{' statement_list '}'
        | '{' declaration_list statement_list '}'
        ;

declaration_list:
        declaration
        | declaration_list declaration
        ;

statement_list:
        statement
        | statement_list statement
        ;

expression_statement:
        comma_expression_opt ';'
        ;

selection_statement:
          IF '(' comma_expression ')' statement
        | IF '(' comma_expression ')' statement ELSE statement
        | SWITCH '(' comma_expression ')' statement
        ;

iteration_statement:
        WHILE '(' comma_expression ')' statement
        | DO statement WHILE '(' comma_expression ')' ';'
        | FOR '(' comma_expression_opt ';' comma_expression_opt ';'
                comma_expression_opt ')' statement
        ;

jump_statement:
        GOTO identifier_or_typedef_name ';'
        | CONTINUE ';'
        | BREAK ';'
        | RETURN comma_expression_opt ';'
        ;



translation_unit:
        external_definition
        | translation_unit external_definition
        ;

external_definition:
        function_definition
        | declaration
        ;

function_definition:
                                     identifier_declarator compound_statement
        | declaration_specifier      identifier_declarator compound_statement
        | type_specifier             identifier_declarator compound_statement
        | declaration_qualifier_list identifier_declarator compound_statement
        | type_qualifier_list        identifier_declarator compound_statement

        |                            old_function_declarator compound_statement
        | declaration_specifier      old_function_declarator compound_statement
        | type_specifier             old_function_declarator compound_statement
        | declaration_qualifier_list old_function_declarator compound_statement
        | type_qualifier_list        old_function_declarator compound_statement

        |                            old_function_declarator declaration_list
                compound_statement
        | declaration_specifier      old_function_declarator declaration_list
                compound_statement
        | type_specifier             old_function_declarator declaration_list
                compound_statement
        | declaration_qualifier_list old_function_declarator declaration_list
                compound_statement
        | type_qualifier_list        old_function_declarator declaration_list
                compound_statement
        ;

declarator:
        identifier_declarator
        | typedef_declarator
        ;

typedef_declarator:
        paren_typedef_declarator          
        | parameter_typedef_declarator    
        ;

parameter_typedef_declarator:
        TYPEDEFname
        | TYPEDEFname postfixing_abstract_declarator
        | clean_typedef_declarator
        ;


clean_typedef_declarator:
        clean_postfix_typedef_declarator
        | '*' parameter_typedef_declarator
        | '*' type_qualifier_list parameter_typedef_declarator
        ;

clean_postfix_typedef_declarator:
        '(' clean_typedef_declarator ')'
        | '(' clean_typedef_declarator ')' postfixing_abstract_declarator
        ;


paren_typedef_declarator:
        paren_postfix_typedef_declarator
        | '*' '(' simple_paren_typedef_declarator ')' 
        | '*' type_qualifier_list
                '(' simple_paren_typedef_declarator ')' 
        | '*' paren_typedef_declarator
        | '*' type_qualifier_list paren_typedef_declarator
        ;

paren_postfix_typedef_declarator: 
        '(' paren_typedef_declarator ')'
        | '(' simple_paren_typedef_declarator postfixing_abstract_declarator ')' 
        | '(' paren_typedef_declarator ')' postfixing_abstract_declarator
        ;

simple_paren_typedef_declarator:
        TYPEDEFname
        | '(' simple_paren_typedef_declarator ')'
        ;

identifier_declarator:
        unary_identifier_declarator
        | paren_identifier_declarator
        ;

unary_identifier_declarator:
        postfix_identifier_declarator
        | '*' identifier_declarator
        | '*' type_qualifier_list identifier_declarator
        ;

postfix_identifier_declarator:
        paren_identifier_declarator postfixing_abstract_declarator
        | '(' unary_identifier_declarator ')'
        | '(' unary_identifier_declarator ')' postfixing_abstract_declarator
        ;

paren_identifier_declarator:
        IDENTIFIER
        | '(' paren_identifier_declarator ')'
        ;

old_function_declarator:
        postfix_old_function_declarator
        | '*' old_function_declarator
        | '*' type_qualifier_list old_function_declarator
        ;

postfix_old_function_declarator:
        paren_identifier_declarator '(' identifier_list ')'
        | '(' old_function_declarator ')'
        | '(' old_function_declarator ')' postfixing_abstract_declarator
        ;

abstract_declarator:
        unary_abstract_declarator
        | postfix_abstract_declarator
        | postfixing_abstract_declarator
        ;

postfixing_abstract_declarator:
        array_abstract_declarator
        | '(' ')'
        | '(' parameter_type_list ')'
        ;

array_abstract_declarator:
        '[' ']'
        | '[' constant_expression ']'
        | array_abstract_declarator '[' constant_expression ']'
        ;

unary_abstract_declarator:
        '*'
        | '*' type_qualifier_list
        | '*' abstract_declarator
        | '*' type_qualifier_list abstract_declarator
        ;

postfix_abstract_declarator:
        '(' unary_abstract_declarator ')'
        | '(' postfix_abstract_declarator ')'
        | '(' postfixing_abstract_declarator ')'
        | '(' unary_abstract_declarator ')' postfixing_abstract_declarator
        ;
%%
