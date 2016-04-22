//
//  ProyectoPlantas.c
//  ProyectoPlantas
//
//  Created by Javier Carazo on 22/4/16.
//  Copyright © 2016 Javier Carazo. All rights reserved.
//

#include <mach/mach_types.h>

kern_return_t ProyectoPlantas_start(kmod_info_t * ki, void *d);
kern_return_t ProyectoPlantas_stop(kmod_info_t *ki, void *d);

kern_return_t ProyectoPlantas_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t ProyectoPlantas_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
