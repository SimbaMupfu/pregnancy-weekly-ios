//
//  ContentView.swift
//  Pregnancy Weekly
//
//  Created by Simbarashe Mupfururirwa on 2023/12/23.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("Hello, world!")
            
            Spacer()
            
            AdBannerView(adUnitID: "ca-app-pub-8796776240904858/8838697368")
                .frame(height: 50)
        }
        .padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
