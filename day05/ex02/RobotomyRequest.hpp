/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequest.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppipes <ppipes@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:05:37 by ppipes            #+#    #+#             */
/*   Updated: 2021/03/18 20:40:14 by ppipes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUEST_H
#define ROBOTOMYREQUEST_H

#include "Form.hpp"

class RobotomyRequest: public Form {
private:
	std::string _target;
public:
	RobotomyRequest(std::string target);
	virtual void execute(Bureaucrat const &executor) const;
/* COPLIEN FORM */
	RobotomyRequest(void);
	~RobotomyRequest();
	RobotomyRequest(RobotomyRequest const &src);
	RobotomyRequest &operator=(RobotomyRequest const &src);
};

#endif