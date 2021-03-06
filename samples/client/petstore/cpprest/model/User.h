/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * User.h
 * 
 * A User who is purchasing from the pet store
 */

#ifndef User_H_
#define User_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// A User who is purchasing from the pet store
/// </summary>
class  User
	: public ModelBase
{
public:
    User();
    virtual ~User();

	/////////////////////////////////////////////
	/// ModelBase overrides
	
    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;
    
 	/////////////////////////////////////////////
	/// User members
	   
    /// <summary>
    /// 
    /// </summary>
    int64_t getId() const;
    void setId(int64_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUsername() const;
    void setUsername(utility::string_t value);
    bool usernameIsSet() const;
    void unsetUsername();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFirstName() const;
    void setFirstName(utility::string_t value);
    bool firstNameIsSet() const;
    void unsetFirstName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastName() const;
    void setLastName(utility::string_t value);
    bool lastNameIsSet() const;
    void unsetLastName();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEmail() const;
    void setEmail(utility::string_t value);
    bool emailIsSet() const;
    void unsetEmail();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPassword() const;
    void setPassword(utility::string_t value);
    bool passwordIsSet() const;
    void unsetPassword();
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPhone() const;
    void setPhone(utility::string_t value);
    bool phoneIsSet() const;
    void unsetPhone();
    /// <summary>
    /// User Status
    /// </summary>
    int32_t getUserStatus() const;
    void setUserStatus(int32_t value);
    bool userStatusIsSet() const;
    void unsetUserStatus();
    
protected:
    int64_t m_Id;
    bool m_IdIsSet;
utility::string_t m_Username;
    bool m_UsernameIsSet;
utility::string_t m_FirstName;
    bool m_FirstNameIsSet;
utility::string_t m_LastName;
    bool m_LastNameIsSet;
utility::string_t m_Email;
    bool m_EmailIsSet;
utility::string_t m_Password;
    bool m_PasswordIsSet;
utility::string_t m_Phone;
    bool m_PhoneIsSet;
int32_t m_UserStatus;
    bool m_UserStatusIsSet;
};

}
}
}
}

#endif /* User_H_ */
