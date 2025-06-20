/**
 * Author: Mattias de Zalenski, Fredrik Niemelä, Per Austrin, Simon Lindholm
 * Date: 2002-09-26
 * Source: Max Bennedich
 * Description: Computes $\binom{v_0 + \dots + v_{n-1}}{v_0, \dots, v_{n-1}}$
 * Status: Tested on kattis:lexicography
 */
#pragma once

ll multinomial(vi& v) {
	ll c = 1, m = v.empty() ? 1 : v[0];
	rep(i,1,sz(v)) rep(j,0,v[i]) 
    c = c * ++m / (j+1);
	return c;
}
