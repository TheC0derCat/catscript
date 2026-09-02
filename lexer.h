enum token_type{};
union token_data{};
struct token{
	enum token_type type;
	union token_data data;
};
