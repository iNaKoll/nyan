// Copyright 2016-2016 the nyan authors, LGPLv3+. See copying.md for legal info.
#ifndef NYAN_NYAN_ERROR_H_
#define NYAN_NYAN_ERROR_H_

#include <exception>
#include <string>

namespace nyan {

/**
 * Base exception for every error that occurs in nyan.
 */
class NyanError : public std::exception {
public:
	NyanError(const std::string &msg);
	virtual ~NyanError() = default;

	virtual std::string str() const;

protected:
	std::string msg;
};

/**
 * Exception for parser problems.
 */
class ParserError : public NyanError {
public:
	ParserError(const std::string &msg, int line=-1, int line_offset=-1);
	virtual ~ParserError() = default;

	std::string str() const override;

protected:
	int line;
	int line_offset;
};

/**
 * Exception for name access problems.
 */
class NameError : public NyanError {
public:
	NameError(const std::string &msg, const std::string &name="");
	virtual ~NameError() = default;

	std::string str() const override;

protected:
	std::string name;
};


/**
 * Thrown when encountering type problems.
 */
class TypeError : public NyanError {
public:
	TypeError(const std::string &msg);
	virtual ~TypeError() = default;
};


} // namespace nyan

#endif
