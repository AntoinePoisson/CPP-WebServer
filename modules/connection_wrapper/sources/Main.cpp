/*
** EPITECH PROJECT, 2021
** Zia
** File description:
** Main
*/

#include "IConnectionWrapper.hpp"
#include "ConnectionWrapper.hpp"

/** @file
 * Include that in your Zia::Module::IConnectionWrapper implementation.
 * Implement createConnectionWrapper. Put that symbol in a shared lib.
 * Congratulations ! You've got a module.
*/

extern "C" {

    /**
    * @fn createConnectionWrapper
    * Create a module instance.
    * @param Zia::IConf &conf: module file unique configuration entity
    * @return Zia::Module::IConnectionWrapper*: the module instance, created with new. This
    * object lifetime is managed by the caller and should be deleted before program termination.
    * @note The module should use the given configuration object to store its configuration.
    * It's not recommanded to write the configuration in a file on the filesystem, as this
    * may conflict with other modules and server files.
    */
    ZIA_EXPORT_SYMBOL Zia::Module::IConnectionWrapper* createConnectionWrapper(Zia::IConf &conf)
    {
        (void)conf;
        return (new ConnectionWrapper);
    }
}
