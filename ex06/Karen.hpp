#ifndef KAREN

# define KAREN

# include <string>

class Karen
{
	private:
		void	_debug(void) const;
		void	_info(void) const;
		void	_warning(void) const;
		void	_error(void) const;
	public:
				Karen(void);
				~Karen();
		void	complain(std::string level) const;
	};

#endif // [KAREN]
